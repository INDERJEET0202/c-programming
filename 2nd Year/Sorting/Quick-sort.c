#include <stdio.h>
#include <stdlib.h>
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    do{
        while(A[i] <= pivot){
            i++;
        }
        while(A[j] > pivot){
            j--;
        }

        if(i < j){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i < j);    

    // Swap A[low] and A[j]
    int temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high){
    int partitionIndex; //Index of pivot after partitioning
    if(low < high){
        partitionIndex = partition(A, low, high);
        // printArray(A, 10); //Prints the array after each partition
        quickSort(A, low, partitionIndex - 1); //Sort elements before pivot(left of pivot)
        quickSort(A, partitionIndex + 1, high); //Sort elements after pivot(right of pivot)
    }
}

int main(){


    int arr[10], i , n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("\nSorted array is: \n");
    printArray(arr, n);
    // int elements, i;
    // printf("Enter the number of elements: ");
    // scanf("%d", &elements);
    // int *array = (int *)malloc(elements * sizeof(int));
    // for (i = 0; i < elements; i++){
    //     printf("Enter data %d - ", i + 1);
    //     scanf("%d", &array[i]);
    // }
    // printf("\nUnsorted array is: \n");
    // printArray(array, elements);
    // quickSort(array, 0, elements - 1);
    // printf("\nSorted array is: \n");
    // printArray(array, elements);

    return 0;
}
