#include <stdio.h>

int main(void)
 {
	int i,temp;

	int n[10];
	for(i=0;i<10;i++)
	{
	printf("enter the numbers");
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{


			if(n[i]>n[i+1])
			{
				temp=n[i];
				n[i]=n[i+1];
				n[i+1]=temp;
			}



	}
	printf("%d",n[i]);
	return 0;
}
