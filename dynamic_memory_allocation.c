#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // USE OF MALLOC
    int *ptr;
    int n;
    printf("Enter the size of array you want to create: ");
    scanf("%d", &n);

    ptr = (int* ) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value number %d of this array : ", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is %d\n", i+1, ptr[i]);
    }

    // // USE OF CALLOC
    // int *ptr;
    // int n;
    // printf("Enter the size of array you want to create:");
    // scanf("%d", &n);
    
    // ptr = (int* ) calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value number %d of this array : ", i+1);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of %d of this array is %d\n", i+1, ptr[i]);
    // }
    
    // USE OF REALLOC
    printf("Enter the size of new array you want to create:");
    scanf("%d", &n);
    
    ptr = (int* ) realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value number %d of this array : ", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value of %d of this array is %d\n", i+1, ptr[i]);
    }

    free(ptr);

    return 0;
}