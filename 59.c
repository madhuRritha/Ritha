#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n=10,large;
clrscr();
for(i=0;i<n;++i)
scanf("%d",&a[i]);
large=a[0];
for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
}
printf("the  highest number is:%d\t",large);
getch();
return 0;
}
