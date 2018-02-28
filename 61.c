#include<stdio.h>
#include<conio.h>
void main()
{
int k,i;
char s[100];
clrscr();
printf("enter the string:");
scanf("%s",s);
printf("enter the number:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
getch();

}

