#include<stdio.h> 

//  Another function to calculate power of a number
// int pow(int x, int y){
//     int res = 1;
//     while(y != 0){
//         if(y % 2 == 0){
//             x = x * x;
//             y = y / 2;
//         }
//         else{
//             res = x * res;
//             y = y - 1;
//         }
//     }
// }

void main(){
    int x, power, res = 1;
    scanf("%d %d", &x, &power);
    while (power >= 1){
        res = x * res;
        power = power - 1;
    }
    printf("%d", res);
}
