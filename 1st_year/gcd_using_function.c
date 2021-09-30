#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of given two numbers is: %d ", result);
    return 0;
}
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}