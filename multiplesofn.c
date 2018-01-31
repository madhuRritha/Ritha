#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,i;
printf("\n Enter the Number: ");
scanf("%d",&n);
for (m=1; m<6; ++m)
{
i=n*m;
printf("\n%d\t ", i);
}
getch();
return 0;
}
