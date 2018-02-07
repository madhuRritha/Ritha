#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,m=0;
clrscr();
printf("Enter the number:");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
m++;
}
}
if(m==2)
{
printf("yes it is aPrime number\n");
}
else
{
printf("no it is not a Prime number\n");
}
getch();
return 0;    
}
