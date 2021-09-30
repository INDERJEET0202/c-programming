/*Write a program in C to calculate Sum of 1st ‘n’ natural numbers.*/
#include <stdio.h>

void main()
{
    int i, n, sum = 0;

    printf("Enter an integer number \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
}