#include <stdio.h>
#include<conio.h>
int main()
{
int n1,n2,temp,*p1,*p2;
p1=&n1;
p2=&n2;
clrscr();
printf("enter the two numbers :");
scanf("%d %d",&*p1,&*p2);
printf("the numbers before swapping is:%d %d",*p1,*p2);
temp=*p1;
*p1=*p2;
*p2=temp;
printf("the numbers after swapping are:%d %d",*p1,*p2);
getch();
return 0;
}
