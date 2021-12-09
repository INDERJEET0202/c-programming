#include <stdio.h>
#include <stdlib.h>

int key, j;
void printArray(int A[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int a[], int n){
    for(int i = 1; i <= (n - 1); i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    // int a[] = {12, 54, 65, 7, 23, 9};
    // int n = 6;
    // printArray(a, n);
    // insertionSort(a, n);
    // printf("After Sorting\n");
    // printArray(a, n);

    int elements, i;
    printf("Enter the number of elements: ");
    scanf("%d", &elements);
    int *array = (int *)malloc(elements * sizeof(int));
    for (i = 0; i < elements; i++){
        printf("Enter data %d - ", i + 1);
        scanf("%d", &array[i]);
    }
    // printArray(array, elements);
    insertionSort(array, elements);
    printf("\nSorted array is: \n");
    printArray(array, elements); 
    return 0;
}