#include <stdio.h>

int main(void)
{
	int m,i, a=1,b=1,c;
	scanf("%d",&m);
	printf("%d \n%d",a,b);
	for(i=1;i<m-1;i++)
	{


		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	return 0;
}
