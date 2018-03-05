#include<stdio.h>
#include<conio.h>
void main()
{
int l,i,temp=0;
char s[100];
printf("enter the string:");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]== 'a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
temp++;
else
continue;
}
if(temp>0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
