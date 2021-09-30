#include <stdio.h>
void strong(int);
int main()
{
    int num;
    printf("Enter number to check: ");
    scanf("%d", &num);
    strong(num);
    return 0;
}
void strong(int n)
{
    int q, rem, fact = 1, i, result = 0;
    q = n;
    while (q != 0)
    {
        rem = q % 10;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }
    if (result == n)
        printf("%d is a strong number", n);
    else
        printf("%d is not a strong number", n);
}