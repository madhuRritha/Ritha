#include <stdio.h>
#include<conio.h>
int main()
{
int n,a,b,c,d,sum;
clrscr();
printf("enter the number:");
scanf("%d",&n);
a=n/100;
b=n%100;
c=b/10;
d=b%10;
if(n%2!=0)
{
sum=d-1;
printf("%d%d%d",a,c,sum);
}
else
printf("%d",n);
getch();
return 0;
}
