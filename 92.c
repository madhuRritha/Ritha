#include <stdio.h>
#include<conio.h>
int main() 
{
int n,i,sum=0;
clrscr();
printf("\n enter the N number:\n");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",i);
sum=i++;
}
printf("%d",sum);
getch();
return 0;
}
