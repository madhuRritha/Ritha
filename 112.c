#include <stdio.h>
#include<conio.h>
int main() 
{
int n,k,i,a[50],temp;
clrscr();
printf("enter the value of N:");
scanf("%d",&n);
printf("enter the value of K:");
scanf("%d",&k);
for(i=0;i<=n;i++)
{
scanf("%d",&i);
}
for(i=0;i<=n;i++)
{
if(k==a[i])
temp++;
}
if(temp!=0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
return 0;
}
