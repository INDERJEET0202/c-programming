#include <stdio.h>
#include <stdlib.h>

void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
} 

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    /* Write the logic to reverse the array. */
    rvereseArray(arr, 0, num-1);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
