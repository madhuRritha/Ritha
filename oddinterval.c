include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,i,odd;
printf("enter the First interval no:\n");
scanf("%d",&n1);
printf("enter the second interval no:\n");
scanf("%d",&n2);
printf("\n The odd numbers between %d and %d are ",n1,n2);
for(i=n1;i<=n2;++i)
{
odd=i%2;
if(odd!=0)
printf("%d",i);
}
getch();
return 0;
}
