#include<stdio.h>
#include<conio.h>
void main()
{
int pro=1,n,m;
clrscr();
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
pro=pro*m;
n=n/10;
}
printf("the product is:%d",pro);
getch();
}
