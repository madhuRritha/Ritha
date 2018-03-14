#include <stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
clrscr();
printf("\n enter the N number:\n");
scanf("%d",&n);
printf("enter the numbers:");
for(i=1;i<=n;i++)
{
scanf("%d",&i);
sum=sum+i;
}
printf("%d",sum);
getch();
return 0;
}
