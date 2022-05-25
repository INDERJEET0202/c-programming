// 9.	A program to find transpose of a matrix in place [ No extra array can be used]

#include <stdio.h>

int main(){
    int size;
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    int mat[10][10], i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            printf("Enter element %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}