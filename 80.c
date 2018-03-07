#include <stdio.h>
#include<conio.h>
int main()
{
char n[10000];
int a,i;
clrscr();
printf("enter the number:");
scanf("%s",n);
for(i=0;n[i]!='\0';i++)
{
a=(int)(n[i]);
if(a%2!=0)
{
printf("\t%c",n[i]);
}
}
getch();
return 0;
}
