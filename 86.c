#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int l,i,j,temp=0;
clrscr();
printf("enter the string:");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(s[i]==s[j])
{
temp=1;
break;
}
else
continue;
}
}
if(temp==0)
printf("yes");
else
printf("no");
getch();
}
