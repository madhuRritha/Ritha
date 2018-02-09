#include<stdio.h>
int main()
{
char s[1000];
int i,temp=0;
printf("enter the input:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
temp++;
}
printf("\n Number of words are: %d",temp+1);
getch();
return 0;
}
