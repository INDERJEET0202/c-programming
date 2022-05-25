#include <stdio.h>

void main(){
    // 3 5 7 10 5
    int sum = 0;
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    printf("Sum of all elements in the array is %d", sum);
}