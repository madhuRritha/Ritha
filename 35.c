#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	int i,temp=0;
	printf("enter the characters");
	scanf("%s",s);


	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' &&  s[i]<='9')
		temp++;


	}
	printf("%d",temp);
	return 0;
}
