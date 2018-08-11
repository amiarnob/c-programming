///bubble sort ascending order
#include <stdio.h>
void main()
{
    int array[100];
    int i, j, n, temp;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    for (i = 0; i < (n-1); i++)
    {
        for (j = i+1; j < n; j++)
       {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}
