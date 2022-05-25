// 8.	A program to sort a set of numbers using bubble sort. Note: separate function has to be written for bubble sort.

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
    for(int i = 0; i <(n - 1) ; i++){ 
        isSorted = 1;
        for(int j = 0; j <  n - 1 - i; j++){ 
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
    int A[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Entered array is : \n");
    printArray(A, n); 
    bubbleSort(A, n); 
    printf("Sorted array is : \n");
    printArray(A, n);

    return 0;
}