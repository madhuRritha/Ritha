#include <stdio.h>
 int main()
{
    int a[50], size, i,max;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of  the array: ", size);
    for (i = 0; i < size; i++)
    scanf("%d", &a[i]);
    max= a[0];
    for (i = 1; i < size; i++)
    {
    if (max < a[i])
    max = a[i];
    }
    printf("\n the maximum element is : %d", max);
    return 0;
}
