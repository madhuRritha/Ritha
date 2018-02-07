#include <stdio.h>
#include <conio.h>
int main() 
{
int a, b,n, value, sum=0, i;
printf("Enter the number of terms \n");
scanf("%d", &n);
printf("Enter first term and common difference \n");
scanf("%d %d", &a, &b);
value = a;
printf("series ist\n");
for(i = 0; i < n; i++)
{
printf("%d ", value);
sum += value;
value = value + b;
}
printf("\nSum of the  series till %d terms is %d\n", n, sum);
getch();
return 0;
}
