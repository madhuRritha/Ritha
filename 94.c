#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[100],i;
clrscr();
printf("enter the n:");
scanf("%d",&n);
printf("enter the k:");
scanf("%d",&k);
printf("enter the n numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the k th value is:%d",a[k-1]);
getch();
}
