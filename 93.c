#include<stdio.h>
#include<conio.h>
void main()
{
int celsius;
double kelvin;
clrscr();
printf("enter the celsius value:");
scanf("%d",&celsius);
kelvin=celsius+273.15;
printf("the kelvin temperature is:%lf",kelvin);
getch();
}
