#include<stdio.h>

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
            printArray(A, 12);
            quickSort(A, low, partitionIndex - 1); //Sort elements before pivot(left of pivot)
            quickSort(A, partitionIndex + 1, high); //Sort elements after pivot(right of pivot)
        }
}

int main(){

    int A[] = {5345, 12, 54, 65, 7, 23, 9, 45,345,45 ,345,34};
    int n = 12;
    printArray(A, n);
    quickSort(A, 0, (n-1));
    printArray(A, n);

    return 0;
}
