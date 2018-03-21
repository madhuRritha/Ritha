#include <stdio.h>
#include<conio.h>
int main() 
{
int n,count=1;
clrscr();
printf("enter the  number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
n=n/10;
count++;
}

printf("the number of digit is:%d",count);
getch();
return 0;
}
