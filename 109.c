#include <stdio.h>
#include<conio.h>
int main() 
{
int a[10],i,j,t;
clrscr();
printf("enter the numbers:");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=10;i++)
{
for(j=i+1;j<=10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("the minimum number is:%d",a[1]);
getch();
return 0;
}
