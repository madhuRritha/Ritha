#include <stdio.h>

 int main()

{

int a[50], size, i,min;

   printf("\n Enter the size of the array: ");

  scanf("%d", &size);

    printf("\n Enter %d elements of  the array: ", size);

    for (i = 0; i < size; i++)

    scanf("%d", &a[i]);

    min= a[0];

 for (i = 1; i < size; i++)

   {

  if (min > a[i])

  min = a[i];

   }

  printf("\n the minimum element is : %d", min);

    return 0;

}

