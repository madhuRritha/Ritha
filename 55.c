#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,i;
clrscr();
printf("enter two number:");
scanf("%d\n%d",&n,&m);
i=n*m;
if(i%2==0)
printf("yes");
else
printf("no");
getch();
return 0;
}
