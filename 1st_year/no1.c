#include <stdio.h>
void main()
{
    int n1, n2;
    printf("Enter the two integers: \n");
    scanf("%d%d",& n1,& n2);
    printf("Before swapping of the integers: \n");
    printf("The first integer = %d \nThe second integer= %d \n", n1, n2);
    swap(& n1, & n2);
    printf("After swapping of the integers: \n");
    printf("The first integer = %d \nThe second integer = %d \n", n1, n2);
}
int swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}