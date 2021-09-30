#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number upto which prime number is required: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j + 1)
                printf("%d\n", i);
        }
    }
    return 0;
}