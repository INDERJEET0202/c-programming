#include<stdio.h>
#include<stdlib.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int low, int high, int mid){
    int i, j, k;
    int B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k] = A[i];
            i++;
        }
        else{
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid){
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high){
        B[k] = A[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++){
        A[i] = B[i];
    }
}

// Merge Sort Algorithm
void mergeSort(int A[], int low, int high){
    if (low < high){
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, high, mid);
        // printArray(A, high + 1); // Uncomment to see the intermediate steps
    }
}

int main(){


    int elements, i;
    int *array = (int *)malloc(elements * sizeof(int));
    printf("Enter the number of elements: ");
    scanf("%d", &elements);
    for(i = 0; i < elements; i++){
        printf("Enter data %d - ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\nUnsorted array is: ");
    printArray(array, elements);
    mergeSort(array, 0, elements - 1);
    printf("Sorted array is: ");
    printArray(array, elements);
    return 0;
}