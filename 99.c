#include <stdio.h>
#include<conio.h>
int main() 
{
int a,b,c,s;
clrscr();
printf("\n enter the 3 numbers:\n");
scanf("%d %d %d",&a,&b,&c);
s=(a*b)%c;
printf("the output:%d",s);
getch();
return 0;
}
