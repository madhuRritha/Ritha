#include <stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int n,i,temp=0;
	printf("enter the input string");
	scanf("%[^\t\n]s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	   if(a[i]==' ')
	    {
	        temp++;
	    }
	}
	printf("%d",temp);
	return 0;
}
