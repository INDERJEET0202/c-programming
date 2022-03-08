#include<stdio.h>

void printHello(int n){
    if (n == 0){
      return;  
    }
    else{
        printf("Hello\n");
        n--;
        printHello(n);
    }
}

int main(){
    printHello(15);
    return 0;
}