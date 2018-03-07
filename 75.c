#include <stdio.h>
#include<string.h>
int main(void) 
{
char s[1000];
int m,n;
printf("enter the string:");
scanf("%s",s);
m=strlen(s);
n=m/2;
if(m%2==0)
{
s[n]='*';
s[n-1]='*';
}
else
{
s[n]='*';
}
printf("%s",s);
return 0;
}
