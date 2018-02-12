#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0,average;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
sum=sum+i;
}
average=sum/n;
printf("the output is:%d",average);
getch();
return 0;
}
