#include <stdio.h>
void fact(int);
int main()
{
    int num;
    printf("Enter number to get factorial of: ");
    scanf("%d", &num);
    fact(num);
    return 0;
}
void fact(int i)
{
    int factorial = 1, j;
    for (j = 1; j <= i; j++)
    {
        factorial = factorial * j;
    }
    printf("Factorial of %d is: %d", i, factorial);
}