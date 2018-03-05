#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,m;
clrscr();
printf("Enter the 1 st number:");
scanf("%d", &n1);
printf("Enter the 2 nd number:");
scanf("%d", &n2);
m=n1*n2;
if(m/n2==n2 && m/n1==n1)
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
