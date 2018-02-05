include <stdio.h>
#include<conio.h>
void main() 
{
  int n, m, i, temp, num, r;
  printf("Enter two numbers ");
  scanf("%d %d", &n, &m);
  printf("enter the Armstrong numbers between %d an %d are: ", n, m);
  for(i=n+1; i<m; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=r*r*r;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
