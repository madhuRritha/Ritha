#include <stdio.h>
#include<conio.h>
int main() 
{
int l,w,h,tsa,v;
clrscr();
printf("\n enter the length ,width and breadth:\n");
scanf("%d %d %d",&l,&w,&h);
tsa=2*(l*w+w*h+h*l);
v=l*w*h;
printf("total surface area is:%d\n",tsa);
printf("volume is:%d",v);
getch();
return 0;
}
