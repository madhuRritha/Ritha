include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[100];
	int l,i,count=0;
	clrscr();
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	    if(s[i]=='0'||s[i]=='1')
	    {
		count++;
	    }
	    else
	    {
	       printf("no..");
	       break;
	    }
	}
	if(l==count)
	{
	     printf("yes");
	}
	getch();
}
