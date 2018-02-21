#include <stdio.h>
#include<conio.h>
int main()
{
int n1,n2,temp;
clrscr();
printf("enter the two numbers :");
scanf("%d %d",&n1,&n2);
printf("the numbers before swapping is:%d %d",n1,n2);
temp=n1;
n1=n2;
n2=temp;
printf("the numbers after swapping are:%d %d",n1,n2);
getch();
return 0;
}
