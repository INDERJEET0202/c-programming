#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a number,a: ", a);
    scanf("%d", &a);
    printf("Enter a number,b: ", b);
    scanf("%d", &b);
    printf("Enter a number,c: ", c);
    scanf("%d", &c);

    if(a > b){
        if(a > c){
            printf("Number a is maximum");
        }
    }
    else if(b > c){
        if (b > a){
            printf("Number b is maximum");
        }
    }
    else{
        printf("Number c is maximum");
    }
}