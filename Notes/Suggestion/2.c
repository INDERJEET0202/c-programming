// 2. A program to print any type of triangle for a given height.

#include <stdio.h>

void printTriangle(int height){
    int i, space, k = 0;
    for (i = 1; i <= height; ++i, k = 0) {
        for (space = 1; space <= height - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }  
}

int main(){
    int height;
    printf("Enter height: ");
    scanf("%d", &height);
    printTriangle(height);
    return 0;
}