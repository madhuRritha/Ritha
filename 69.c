#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,o;
clrscr();
printf("enter 2 numbers:");
scanf("%d %d",&n,&m);
o=n-m;
if(o%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
return 0;
}
