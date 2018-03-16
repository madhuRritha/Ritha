#include <stdio.h>
#include<conio.h>
int main() 
{
int n,a[30],i;
clrscr();
printf("enter the n:");
scanf("%d",&n);
printf("enter the n numbers:");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i!=a[i])
{
printf("\n%d",i);
break;
}
}
getch();
return 0;
}
