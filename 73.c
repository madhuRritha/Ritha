#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,r;
clrscr();
printf("enter the number:");
scanf("%d",&n);
printf("enter the l number:");
scanf("%d",&l);
printf("enter the r number:");
scanf("%d",&r);
if(n>l && n<r)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
