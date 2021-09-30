#include <stdio.h>
int main()
{
    int n, num, sum = 0, remainder;

    printf("Enter an integer\n");
    scanf("%d", &n);

    num = n;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("Sum of digits of %d = %d\n", n, sum);

    return 0;
}