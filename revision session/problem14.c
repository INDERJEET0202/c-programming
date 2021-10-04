#include <stdio.h>

int main()
{
    int n, i, flag = 0, count = 0;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d - ", i+1);
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = arr;
    int item;
    printf("Enter element to be searched - ");
    scanf("%d", &item);
    for ( i = 0; i < n; i++)
    {
        if (item == *(ptr+i))
        {
            count = (i+1);
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element %d is found in %dth position.", item, (count));
    }
    else
    {
        printf("Element %d is not found in the array ...", item);
    }
    
    return 0;
}
