#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("Enter the number:");
scanf("%d", &n);
if(n%7==0)
{
printf("yes ");
}
else
{
printf("no ");
}
getch();
return 0;    
}
