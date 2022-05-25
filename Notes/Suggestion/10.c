// 10.	A program to display column wise summation of a matrix. At end find grand total

#include <stdio.h>

int main(){
    int size;
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    int mat[10][10], i, j, sum = 0;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            printf("Enter element %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }  
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            sum = sum + mat[i][j];
        }
        printf("Sum of column %d is %d\n", i, sum);
        sum = 0;
    }
    return 0;
}