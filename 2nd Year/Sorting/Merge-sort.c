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
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

// Merge Sort Algorithm
void mergeSort(int A[], int low, int high){
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, high, mid);
        // printArray(A, high + 1); // Uncomment to see the intermediate steps
    }
}

int main(){

    int A[] = {12, 54, 65, 7, 23, 9, 123, 213, 76, 9, 4, 1, 432, 236, 146, 34, 23};
    int n = sizeof(A)/sizeof(A[0]);
    printArray(A, n);
    mergeSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}
