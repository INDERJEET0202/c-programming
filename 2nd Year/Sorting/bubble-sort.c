#include <stdio.h>

int temp;
int isSorted = 0;
void printArray(int A[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int A[], int n){
    for(int i = 0; i <(n - 1) ; i++){ // For number of pass
        printf("Working on Pass number %d\n", i+1);
        isSorted = 1;
        for(int j = 0; j <  n - 1 - i; j++){ // For comparision in each pass
            if (A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    }
}

int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(A, n); // Printing the array before sorting.
    bubbleSort(A, n); // Function to sort array.
    printArray(A, n);// Printing the array after sorting.

    return 0;
}