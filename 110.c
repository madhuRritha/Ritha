#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("the sum of first k natural numbers is:%d",sum);
getch();
}
