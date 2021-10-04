#include <stdio.h>

int main()
{
    int n, sum = 0,i;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i<n; i++)
    {
        printf("Enter element %d in the array- ", i+1);
        scanf("%d", &arr[i]);
    }
    // for(i = 0; i<n; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    int *ptr;
    ptr = arr;

    for(i = 0; i<n; i++)
    {
        sum = sum + *(ptr+i);
    }
    printf("Sum of given %d integers is %d", n, sum);

    return 0;
}
