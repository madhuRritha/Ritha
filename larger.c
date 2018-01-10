#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is larger");
}
else if(b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
getch();
}
