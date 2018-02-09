#include<stdio.h>
int main()
{
    int t,n,m;
    printf("enter the numbers");
    scanf("%d %d",&n,&m);
    t=n;
    n=m;
    m=t;
    printf("%d %d",n,m);
    return 0;
}
