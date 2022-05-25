#include <stdio.h>

void main(){
    // 3 5 7 10 5
    int max = -1;
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Maximum element is %d", max);
}