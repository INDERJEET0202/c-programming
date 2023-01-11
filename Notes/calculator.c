#include <stdio.h>

int main(){
    int a, b, sum, multiply, subtraction;
    printf("Enter two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("--- CALCULATOR ---\n");
    printf(" Enter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Division ");
    int choice;
    scanf("%d", &choice);

    // if(choice == 1){
    //     sum = a + b;
    //     printf("Addition of %d and %d is %d", a, b, sum);
    // }
    // else if(choice == 2){
    //     printf("Subtraction of %d and %d is %d", a, b, a - b);
    // }
    // else if(choice == 3){
    //     printf("Multiplication of %d and %d is %d", a, b, a * b);
    // }
    // else if(choice == 4){
    //     printf("Division of %d and %d is %d", a, b, (a / b));
    // }
    // else{
    //     printf("Invalid Input");
    // }






    switch(choice){
        case 1:
            sum = a + b;
            printf("Addition of %d and %d is %d", a, b, sum);
            break;
        case 2:
            subtraction = a - b;
            printf("Subtraction of %d and %d is %d", a, b, subtraction);
            break;
        case 3:
            multiply = a * b;
            printf("Multiplication of %d and %d is %d", a, b, multiply);
            break;
        case 4:
            printf("Division of %d and %d is %d", a, b, (a / b));
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}