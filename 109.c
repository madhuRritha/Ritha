#include <stdio.h>
int main(void) {
	int a[10],i,j,t;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d",a[1]);
	return 0;
}
