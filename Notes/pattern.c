// #include<stdio.h>

// int main() {
//     int row, space, rows, star = 0;
//     printf("Enter the number of rows in pyramid\n");
//     scanf("%d",&rows);
 
//     for(row = 1;row <= rows; row++) {
//      /* Printing spaces */
//         for(space = 1; space <= rows-row; space++) {
//            printf("  ");
//         }
//         /* Printing stars */
//         while(star != (2*row - 1)) {
//             printf("* ");
//             star++;
//         }
//         star=0;
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//   // variable
//   char str[20];

//   // take input
//   printf("Enter a string: ");
//   scanf("%[^\n]",str);

//   // print pattern
//   // outer loop for row
//   for(int i=0; str[i]!='\0'; i++)
//   {
//     // inner loop for column
//     for(int j=0; j<=i; j++)
//     {
//       // display
//       printf("%c", str[j]); 
//     }

//     printf("\n"); // new line
//   }

//   return 0;
// }


#include <stdio.h>

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}