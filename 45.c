#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,count;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
n=n/10;
count++;
}
printf("the number of digits is:%d",n);
getch();
return 0;
}
