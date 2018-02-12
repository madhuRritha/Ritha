#include<stdio.h>
#include<conio.h>
int main()
{
char a[10],b[10];
int c,d;
clrscr();
printf("enter the two strings:");
scanf("%s %s",a,b);
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("string 1 is greater%s",a);
}
else if(d>c)
{
printf("string 2 is greater %s",b);

}
else
printf("%s",a);
getch();
return 0;
}
