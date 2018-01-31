#include<stdio.h>
   int main()
   {
    int m,n1, n2, k,i;
     printf("\n Enter any two Numbers : ");
   scanf("%d %d",&n1,&n2);
   printf("\nThe Prime Numbers between the given Two Intervals are ");
                
 for(m=n1; m<=n2; ++m)
  {
i=0;
for(k=2;k<=m/2;k++)
{
 if((m % k) ==0)
 {
 i++;
  break;
  }
  
  }
  if(i==0)
   printf("\n %d ", m);
    }
    getch();
   return 0;
   }
