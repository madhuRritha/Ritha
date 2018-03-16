#include <stdio.h>
#include<conio.h>
int main() 
{
int n,k,temp=1,i;
clrscr();
printf("enter the n:");
scanf("%d",&n);
printf("enter the k:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
temp=temp*n;
}
printf("N^K=%d",temp);
getch();
return 0;
}
