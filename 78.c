#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
clrscr();
printf("Enter the number:");
scanf("%d", &n);
if(n%13==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
return 0;    
}
