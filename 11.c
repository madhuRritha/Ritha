#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int base,exponent,value;
clrscr();
printf("enter the base number:");
scanf("%d",base);
printf("enter the power:");
scanf("%d",exponent);
value=pow(base,exponent);
printf("the value is:",value);
getch();
return 0;
}
