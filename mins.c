#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i;
clrscr();
printf("enter the minutes:");
scanf("%d",&i);
a=i/60;                              /* min/60=hrs */
b=i%60;                              /* min%60=remainder->minutes */
printf(" %d  %d ",a,b);
getch();
return 0;
}
