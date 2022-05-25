// 5! = 5 x 4 x 3 x 2 x 1

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // int i = 1;
    // int fact = 1;
    // int result = 0;
    // while(i <= number){
    //     fact = fact * i;
    //     // 1  <-  1 x 1
    //     // 2  <-  1 x 2
    //     // 6  <-  2 x 3
    //     // 24  <-  6 x 4
    //     // 120  <- 24 x 5
    //     printf("%d\n", fact);
    //     // result = result + i;
    //     //  1        0     + 1
    //     //  3        1     + 2
    //     i++;
    // }
    int fact=1;
    for(int i=1;i<=number;i++){
      fact=fact*i;  
    }
    printf("%d\n", fact);
    return 0;
}