

#include<stdio.h>
#include<conio.h>
int main()
{
int p,q,r,l;
int m,n,o,x;
printf("enter the 1 st digit:");
scanf("%d",&p);
printf("enter the 2nd digit: ");
scanf("%d",&q);
printf("enter the 3 rd digit:");
scanf("%d",&r);
printf("\n the given number is :%d%d%d",p,q,r);
m=(p*p*p);
n=q*q*q;
o=r*r*r;
x=m+n+o;
printf("\n the sum of cube of the digits are :%d",x);
l=p*100+q*10+r*1;
if(l==x)
{
printf("\n yes");
}
else
printf("\n no");
getch();
return 1;
}
