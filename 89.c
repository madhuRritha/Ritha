#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s[100];
int l,i,j,temp;
clrscr();
printf("enter the string");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(s[i]>s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
printf("%s",s);
getch();
return 0;
}
