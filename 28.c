#include <stdio.h>
#include<conio.h>
int main(void) 
{
int n,a[100],i;
clrscr();
printf("enter the n");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
printf("%d\t\n%d\t",i,a[i]);
}
getch();
return 0;
}
