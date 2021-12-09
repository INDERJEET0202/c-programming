#include<stdio.h>
#include<stdlib.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main(){

    // int A[] = {12, 54, 65, 7, 23, 9};
    // int n = 6;
    // printArray(A, n);
    // selectionSort(A, n);
    // printArray(A, n);

    int elements, i;
    printf("Enter the number of elements: ");
    scanf("%d", &elements);
    int *array = (int *)malloc(elements * sizeof(int));
    for (i = 0; i < elements; i++){
        printf("Enter data %d - ", i + 1);
        scanf("%d", &array[i]);
    }
    // printArray(array, elements);
    selectionSort(array, elements);
    printf("\nSorted array is: \n");
    printArray(array, elements); 
    return 0;
}
