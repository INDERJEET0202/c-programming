// 5 x 1 = 10
// 5 x 2 = 20
// 5 x 3 = 20
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35


#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 0; i <= 13; i++){
        printf("%d x %d = %d \n", num, i, (num*i));
    }
    return 0;
}