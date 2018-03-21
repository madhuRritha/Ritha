#include <stdio.h>
#include<conio.h>
int main() 
{
int n,a,d,i,sum=0;
clrscr();
printf("enter the 3 numbers:");
scanf("%d %d %d",&a,&d,&n);
for(i=0;i<=n;i++)
{
sum=sum+(a+i*d);
}
printf("the sum of AP is:%d",sum);
getch();
return 0;
}
