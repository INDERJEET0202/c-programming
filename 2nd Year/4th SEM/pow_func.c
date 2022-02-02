#include<stdio.h> 

// Another function to calculate power of a number using dynamic programming
int pow_nor(int x, int y){
    int res = 1;
    while(y != 0){
        if(y % 2 == 0){
            x = x * x;
            y = y / 2;
        }
        else{
            res = x * res;
            y = y - 1;
        }
    }
}

int fastPower(int a, int b){
   int res = 1;
    while (b > 0){
        if((b&1) != 0){ // if b is odd
            res = res * a;
        }
        a = a * a;
        b = b >> 1; // b = b/2
    }
    return res;
}

// function to calculate power of a number using array
int pow_dyn(int x, int y){
    int res[y+1];
    res[0] = 1;
    for(int i = 1; i <= y; i++){
        res[i] = res[i-1] * x;
    }
    return res[y];
}
// function to calculate power of a number using recursion
int pow_rec(int x, int y){
    if(y == 0)
        return 1;
    else if(y % 2 == 0)
        return pow_rec(x, y/2) * pow_rec(x, y/2);
    else
        return x * pow_rec(x, y-1);
}
//   using simple for loop
int pow_loop(int x, int power){
    int res = 1;
    for(int i = 0; i < power; i++){
        res = res * x;
    }
    return res;
}

void main(){
    int x, power, res = 1;
    scanf("%d %d", &x, &power);
    res = pow_loop(x, power);
    printf("%d", res);
    printf("\n");
    res = pow_nor(x, power);
    printf("%d", res);
    printf("\n");
    res = pow_dyn(x, power);
    printf("%d", res);
    printf("\n");
    res = pow_rec(x, power);
    printf("%d", res);
}
