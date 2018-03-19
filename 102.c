#include<stdio.h>
#include<string.h>
int main()
{
int n;
clrscr();
printf("enter the number:");
scanf("%d",&n);
if(n>=1&&n<=10)
{
while(n%2==0)
{
n=n/2;
}
}
printf("%d",n);
getch();
return 0;
}
