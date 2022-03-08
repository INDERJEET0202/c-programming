#include<stdio.h>


int josephusProblem(int n , int k){ // n = no of people, k = no of people to
    if (n == 0){
        return 0;
    }
    else{
        return (jos(n-1, k) + k) % n;
    }
}

int main(){
    printf("%d\n", jos(5, 3));
    return 0;
}