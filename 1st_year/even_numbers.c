#include <stdio.h>

int main()
{
    int n, i, j;
    printf("From which number do u want to start: ");
    scanf("%d", &n);
    printf("Upto which number do u want to end: ");
    scanf("%d", &j);
    for (i = n; i <= j; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}