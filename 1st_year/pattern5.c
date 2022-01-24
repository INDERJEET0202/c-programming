// Pattern
//     1
//    21
//   321
//  4321
// 54321

#include <stdio.h>

int main(){
    int n, i, j, k;
    printf("Enter the number of ROWS: ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        for(j = n; j >= 1; j--){
            // printf("%d ", j);
            if(i >= j)
                printf("%d", j);
            else 
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;   
}