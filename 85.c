#include <stdio.h>
#include<conio.h>
int main() 
{
char s[20];
int i,n;
printf("\n enter the string:\n");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%c",s[i]);
}
}
printf(" ");
for(i=0;i<n;i++)
{
if(i%2==1)
{
printf("%c",s[i]);
}
}
getch();
return 0;
}
