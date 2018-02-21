#include<stdio.h>
#include<conio.h>
int main()
{
int n=1;
clrscr();
printf("enter the number:");
scanf("%d",&n);
if(n<=10)
{
switch(n)
{
case 1:
if(n==1)
printf("one");
break;
case 2:
if(n==2)
printf("two");
break;
case 3:
if(n==1)
printf("three");
break;
case 4:
if(n==2)
printf("four");
break;
case 5:
if(n==1)
printf("five");
break;
case 6:
if(n==2)
printf("six");
break;
case 7:
if(n==1)
printf("seven");
break;
case 8:
if(n==2)
printf("eight");
break;
case 9:
if(n==1)
printf("nine");
break;
case 10:
if(n==2)
printf("ten");
break;
}
}
getch();
return 0;
}
