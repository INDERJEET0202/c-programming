#include <stdio.h>
#include <stdlib.h>
// int sum(int a, int b) {
//     return a + b;
// }

// int main(){
//     // char name[20];
//     int a, b;
//     printf("Enter 1st number: ");
//     scanf("%d", &a);
//     printf("Enter 2nd number: ");
//     scanf("%d", &b);
//     int c = sum(a, b);
//     printf("Sum of %d and %d is %d\n", a, b, c);
//     // printf("Enter name: ");
//     // scanf("%s", &name);
//     // printf("Entered name is %s", name);
    
//     // int a = 0;
//     // if(a){
//     //     printf("a b c");
//     // }
//     // else{
//     // printf("x y z ");
//     // }
//     // return 0;
// }

void update(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int sum(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);                        
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("%d, %d", a, b);
    update(pa, pb);
    printf("%d, %d", a, b);
    return 0;
}
