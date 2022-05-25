// 4.	A program for matrix addition

#include <stdio.h>

int size;
int m1[10][10], m2[10][10], m3[10][10];

void takeInput(int m[10][10]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int main(){
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    printf("Enter matrix 1: \n");
    takeInput(m1);
    printf("Enter matrix 2: \n");
    takeInput(m2);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 10; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Matrix 3: \n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}