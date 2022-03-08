#include<stdio.h>

int kthSmallest(int*, int, int, int);

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

void main()
{
    int n, k;
    printf("Enter number of Elements required in array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Elements required in array:\n");
    for (int i = 0;i < n;i++)
    {
        scanf("%d", a + i);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    selectionSort(a, n);
    int kthsmall = a[k-1];
    printf("%d", kthsmall);


}


int kthSmallest(int arr[], int l, int r, int k)
{
    int x, t, p, i, j;

    for (i = l;i < k + l;i++)
    {

        x = arr[i];
        for (j = i + 1;j <= r;i++)
        {
            if (x > arr[j])
            {
                x = arr[j];
                p = j;
            }

        }
        t = arr[i];
        arr[i] = x;
        arr[p] = t;
    }
    return arr[l + k - 1];
}