#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(){
    // char name[20];
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int c = sum(a, b);
    printf("Sum of %d and %d is %d\n", a, b, c);
    // printf("Enter name: ");
    // scanf("%s", &name);
    // printf("Entered name is %s", name);
    
    // int a = 0;
    // if(a){
    //     printf("a b c");
    // }
    // else{
    // printf("x y z ");
    // }
    // return 0;
}