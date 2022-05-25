// 6.	A program to find sum of the following series 1+3*5+7*9+…. up to n terms

#include <stdio.h>

int main(){
    int n, i,s=1,j=1,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum=sum+(s*j);
        s=s+(2*i);
        j=s+2;
    }
    printf("Sum of the series is %d\n", sum);
    return 0;
}
