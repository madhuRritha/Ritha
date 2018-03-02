#include<stdio.h>

int main()

{

char s[10000];

int i,count=0;

printf("enter the input:");

scanf("%[^\n]s",s);

for(i=0;s[i]!='\0';i++)

{

if(s[i]==' ')

count++;

}

printf("\n Number of words are: %d",count+1);

getch();

return 0;

}
