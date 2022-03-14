#include <stdio.h>

int Power(int a, int b){
   int res = 1;
    while (b > 0){
        if((b&1) != 0){ 
            res = res * a;
        }
        a = a * a;
        b = b >> 1; 
    }
    return res;
}

int main(){
    int x, power, res = 1;
    scanf("%d %d", &x, &power);
    res = Power(x, power);
    printf("%d", res);
    return 0;
}