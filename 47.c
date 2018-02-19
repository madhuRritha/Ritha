#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,n,large,small;
clrscr();
printf("enter the numbers:");
scanf("%d",&n);
for(i=0;i<n;++i)
scanf("%d",&a[i]);
large=small=a[0];
for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("the lowest and highest numbers are:");
printf("%d\t",small);
printf("\t%d\t",large);
getch();
return 0;
}
