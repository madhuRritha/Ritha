#include<stdio.h>
#include<conio.h>
int main()
{
int h1,h2,m1,m2,i,j;
printf("\nenter the 1 st hours value:");
scanf("%d",&h1);
printf("\nenter the 1 st min value:");
scanf("%d",&m1);

printf("\nenter the 2nd hours value:");
scanf("%d",&h2);
printf("\nenter the 2nd min value:");
scanf("%d",&m2);
printf("\nthe time is %d:%d",h1,m1);
printf("\nthe time is %d:%d",h2,m2);
i=h1-h2;
j=m1-m2;
printf("\nthe output is %d %d",i,j);
getch();
return 1;
}
