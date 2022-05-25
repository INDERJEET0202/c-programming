#include <stdio.h>

void main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if(a % 2 == 0) /* 19 % 2 = 0 */{
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
}