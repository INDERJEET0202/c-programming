#include <stdio.h>

int key, j;
void printArray(int A[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int a[], int n){
    for(int i = 1; i <= (n - 1); i++){ // Loop for passes
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){ // Loop for each pass
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n); // Printing the array before sorting.
    insertionSort(a, n); // Function to sort array.
    printArray(a, n); // Printing the array after sorting.
    return 0;
}