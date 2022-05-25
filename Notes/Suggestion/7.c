// 7.	A program to find sum of digits of a number

#include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}