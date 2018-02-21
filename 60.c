#include<stdio.h>
#include<conio.h>
int main()
{
int num,i, a=-1,b=1,c;
clrscr();
printf("enter the number:");
scanf("%d",&num);
for(i=0;i<=num;++i)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
getch();
return 0;
}
