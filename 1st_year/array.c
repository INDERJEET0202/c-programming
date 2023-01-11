#include <stdio.h>

int main(){

    // Structure of array deceleration 
    // datatype variable_name [sizeOfArray]
    // int marks[5];

    // int marks[] = {56, 78, 89, 60, 87};
    // printf("%d", marks[2]);

    // marks[0] = 50;
    // marks[1] = 60;
    // marks[2] = 70;
    // marks[3] = 80;
    // marks[4] = 90;

    // printf("%d\n", marks[0]);
    // printf("%d\n", marks[1]);
    // printf("%d\n", marks[2]);
    // printf("%d\n", marks[3]);
    // printf("%d\n", marks[4]);

    // loop
    // for(int i = 0; i < 5; i++){
    //     printf("Enter the marks of student %d: ", i+1);
    //     scanf("%d", &marks[i]);
    // }

    // for(int i = 0; i < 5; i++){
    //     printf("Marks of %d student is %d\n", i+1 , marks[i]);
    // }

    // 2d matrix         0, 1, 2, 3
    int matrix[4][4] = {{4, 5, 6, 7}, 
                      {8, 9, 10, 11}, 
                      {12, 13, 14, 15}, 
                      {16, 17, 18, 19}}; 

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //   0  1  2  3
    // 0 4  5  6  7 
    // 1 8  9  10 11
    // 2 12 13 14 15
    // 3 16 17 18 19

    // printf("%d", matrix[0][0]);

    return 0;
}
