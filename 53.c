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
sum=a+c+d;
printf("%d",sum);
getch();
return 0;
}
