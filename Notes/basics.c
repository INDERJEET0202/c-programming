#include <stdio.h>

void main(){
    int a, b, c;
    // char b;
    // float c;
    a = 5;
    printf("enter two integer number."); /* print this in console comment line */
    scanf("%d%d", &a, &b);
    printf("First number is %d and second number is %d", a, b);
    c = a + b;
    printf("Sum of two numbers is %d", c);
}