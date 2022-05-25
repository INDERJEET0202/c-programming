#include <stdio.h>

void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age == 19){
        printf("Same age");
    }
    else if(age > 19){
        printf("senior");
    }
    else{
        printf("junior");
    }
}