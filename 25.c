#include <stdio.h>
#include<conio.h>
int main(void) 
{
int i,j,a[100],n,temp;
printf("\nEnter the size :");
scanf("%d",&n);
printf("\nEnter the array nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf(" \nThe median element is %d",a[n/2]);
return 0;
}
