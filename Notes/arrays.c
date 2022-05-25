#include <stdio.h>

void main(){

    int arr[5]; 
    // datatype  name size
    int i = 10;
    printf("%d", i);

    // arr[0] = 10;
    // arr[1] = 11;
    // arr[2] = 13;
    // arr[3] = 13;
    // arr[4] = 13;
    // arr[5] = 13;

    for(int i = 0; i < 5; i++){
        printf("Enter %dth element: ", i);
        scanf("%d", &arr[i]);
    }

    // printf("%d", arr[3]);

    for(int i = 0; i < 5; i++){
        printf(" %d \n ", arr[i]);
    }
}