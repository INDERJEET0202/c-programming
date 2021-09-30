#include <stdio.h>

int main()
{
    int i, arr[10];

    printf("Enter 10 integers:");
    for (i = 0; i < 10; ++i)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; ++i)
        printf("\tNumbers are:%d", arr[i]);

    return 0;
} 