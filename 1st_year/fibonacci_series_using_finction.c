#include <stdio.h>

int fibo(int, int (arr[10]));
int main()
{
    int n, i, f, k;
    int arr[10];
    for(k = 0; k < 10; k++)
        arr[k] = -1;

    printf("Enter value of n: ");
    scanf("%d", &n);
    // printf("The whole series is: \n");
    // for (i = 0; i < n; i++)
    // {
        f = fibo((n-1), arr);
    //     // printf("%d\t", f);
    // }
    printf("\n%dth term of Fibonacci series is %d",n, f);

}
int fibo(int n, int arr[10])
{
    if (n == 0){
        printf("value of n is %d\n", n); 
        arr[0] = 0;
        return 0;
    }
    else if (n == 1){
        printf("value of n is %d\n", n); 
        arr[1] = 1;
        return 1;
    }
    else{
        if(arr[n] != -1)
            return arr[n];
        else{
            printf("value of n is %d\n", n);    
            arr[n] = fibo(n - 1, arr) + fibo(n - 2, arr);
            return arr[n];
        }
    }
}