#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
char s[1000];
clrscr();
printf("\n enter the string:\n");
scanf("%s",s);
printf("the reverse of the string is:%s",strrev(s));
getch();
return 0;
}
