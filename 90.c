#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
char s[100];
int i,n;
printf("\n enter the alphanumeric string:\n");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]>='a' && s[i]<='z')
{
printf("%d",s[i]);
}
}
return 0;
}
