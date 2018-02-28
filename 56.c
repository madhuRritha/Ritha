#include<stdio.h>
#include<conio.h>
int main()
{
int num,*p1;
char alp,m,*p;
p=&alp;
p1=&num;
clrscr();
printf("enter the string:");
scanf("%s",m);
alp='a'<=alp<='z';
num='0'<=num<='1';
if(m==(*p && *p1))
printf("yes");
else
printf("no");
getch();
return 0;
} 
