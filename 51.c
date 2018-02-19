#include <stdio.h>
#include<conio.h>
int main()
{
int n,a,b,c,d;
clrscr();
printf("enter the number:");
scanf("%d",&n);
a=n/100;
printf("%d\t",a);
b=n%100;
c=b/10;
printf("%d\t",c);
d=b%10;
printf("%d",d);
getch();
return 0;
}
