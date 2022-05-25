// *                       
// * *
// * * *
// * * * *
// * * * * *




#include <stdio.h>

int main(){

    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    // for(int i = n; i > 0; i--){
    //     for(int j = i; j <= n; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

     for(int i = 0; i <= 5; i++){ /* for number of rows */
         for(int j = 1; j <= i; j++){ /* for printing stars */
             printf("* ");
         }
         printf("\n");
     }
    
    return 0;
}