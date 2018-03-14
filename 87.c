#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i,gcd;
clrscr();
printf("enter the values");
scanf("%d %d", &n, &m);
for(i=1;i<=n&&i<=m;++i)
{
if(n%i==0&&m%i==0)
gcd=i;
}
printf("%d",gcd);
getch();
}
