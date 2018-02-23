#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,m;
clrscr();
printf("enter two numbers:");
scanf("%d %d",&n,&m);
a=n+m;
if(a%2==0)
prtinf("even");
else
printf("odd");
getch();
return 0;
}
