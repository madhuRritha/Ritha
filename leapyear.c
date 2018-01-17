#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the year:");
scanf("%d",&n);
if(n%4==0)
{
printf("this is leap year");
}
else
{
printf(" it is not an leap year");
}
getch();
}
