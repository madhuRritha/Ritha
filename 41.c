#include<stdio.h>
int main()
{
char a[10];
int i,n;
printf("enter the string:");
scanf("%s",a);
printf("enter the number of times to print the string:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%s\n",a);
}
return 0;
}
