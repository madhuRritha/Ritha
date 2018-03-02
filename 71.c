#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()

{
char s[100];
clrscr();
printf("enter the string:");
scanf("%s",s);
if(strrev(s)==s)
{
printf("it is  a palindrome");
}
else
{
printf("is  not a palindrome");
}
getch();
return 0;
}
