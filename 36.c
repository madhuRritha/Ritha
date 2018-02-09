#include <stdio.h>
#include<string.h>
int main(void)
 {
	char s[50];

	int c,count=0,count1;
	printf("enter the input string");
	scanf("%[^\t\n]s",s);
	for(c=0;s[c]!='\0';c++)
	{
	if((s[c]>='0' && s[c]<='9')
	|| (s[c]>='A' && s[c]<='Z')
	|| (s[c]>='a' && s[c]<='z')
          || s[c]==' ' || s[c]== '.')
            count1++;
          else
            count++;
	}
	printf("%d",count);
	return 0;
}
