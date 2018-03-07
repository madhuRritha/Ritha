#include<stdio.h>
#include<conio.h>
void main()
{
float n;
int m;
clrscr();
printf("enter the number:");
scanf("%f",&n);
if(n<0)
m=(int)(n-0.5);
else
m=(int)(n+0.5);
printf("%d",m);
getch();
}
