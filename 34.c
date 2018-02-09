#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[50];
	int i,temp=1;
	printf("enter the paragraph");
	scanf("%s",s);

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] == '.')
		temp++;


	}
	printf("%d",temp);
	return 0;
}
