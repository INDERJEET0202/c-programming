#include <stdio.h>
int main()
{
    int i, a, b, res = 1;
    printf("Enter the value of 'a' and 'b' ");
    scanf("%d%d", &a, &b);
    for (i = 1; i <= b; i++)
    {
        res = res * a;
    }
    printf("The result is : %d", res);
}