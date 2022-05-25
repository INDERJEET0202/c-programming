// 0    1 ->   1 ->   2 ->  3 ->  5 ->  8 ->  13 -> ..
// n1   n2    n3
//      n1    n2     n3
//            n1     n2    n3

#include <stdio.h>

int main(){

    int num1 = 0, num2 = 1;
    int num3;
    int number; 
    printf("Enter the number of elements: ");
    scanf("%d", &number);
    printf("\n %d %d\n", num1, num2);
    for(int i = 2; i <= number; i++){
        num3 = num1 + num2;
        printf(" %d", num3);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}


