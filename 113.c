#include <stdio.h>
#include<conio.h>
int main() 
{
int n,k,i,a[50],temp=0;
clrscr();
printf("enter the value of N:");
scanf("%d",&n);
printf("enter the value of K:");
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(k==a[i])
temp=temp++;
}
printf("the number of repetitions is:%d",temp);
getch();
return 0;
}
