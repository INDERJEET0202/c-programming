// A
// B B
// C C C
// D D D D
// E E E E E

// A
// A B
// A B C
// A B C D
// A B C D E



// #include <stdio.h>

// int main(){
//     int rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for(int i = 1; i <= rows; i++){
//         for(int j = 1; j <= i; j++){
//             printf("%c ", j + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//         A
//       B A B
//     C B A B C
//   D C B A B C D
// E D C B A B C D E


#include<stdio.h>


void main()
{
    int i, n, j;

    printf("Enter the no of lines\n");
    scanf("%d", &n);

    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= n - i;j++){
            printf("  ");
        }
        for (j = i;j > 0;j--){
            printf(" %c", (char)(j + 64));
        }
        for (j = 2;j <= i;j++){
            printf(" %c", (char)(j + 64));
        }
        printf("\n");
    }
}