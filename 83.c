#include <stdio.h>
#include<conio.h>
int main() 
{
int n,m,i;
char sym;
printf("\n enter the two numbers:\n");
for(i=1;i<=4;i++)
{
scanf("%d %c %d",&n,&sym,&m);
if(sym=='/')
{
printf("%d\n",n/m);
}
else
{
printf("%d\n",n%m);
}
}
getch();
return 0;
}
