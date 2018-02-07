
#include<stdio.h>
#include<conio.h>
int main()
{
int i=0,n,temp;
clrscr();
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
i=i*10;
i=i+temp%10;
temp=temp/10;
}
if(n==i)
{
printf("the num is palindrome:",n);
scanf("%d",&n);
}
else
printf("the num is not palindrome:",n);
scanf("%d",&n);
getch();
return 0;
}
