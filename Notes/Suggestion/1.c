// 1.	A program to check whether number belongs to Fibonacci series or not

#include <stdio.h>

int main(){
    int f1, f2, f3, num;
    printf("Enter N: ");
    scanf("%d", &num);
    f1 = 0; 
    f2 = 1;
    if(num == 0){
        printf("%d belongs to fibonacci series\n", num);
    }
    f3 = f1 + f2;
    while(f3 <= num){
        if(f3 == num){
            printf("%d belongs to fibonacci series\n", num);
            break;
        }
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    if(f3 > num){
        printf("%d does not belong to fibonacci series\n", num);
    }
    return 0;
}