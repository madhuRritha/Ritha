#include <stdio.h>
#define MAX_SIZE 1000  

int main()
{
    int a[MAX_SIZE];
    int size;
    int i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<size; i++)
    {
        
        for(j=i+1; j<size; j++)
        {
           
            if(a[i] > a[j])
            {
                temp     = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

   
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
