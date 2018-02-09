#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the numbers");
    scanf("%d %d",&n,&m);
    n=n^m;
    n=n^m;
    n=n^m;
    printf("%d %d",n,m);
    return 0;
}
