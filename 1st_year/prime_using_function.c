#include <stdio.h>
void prime(int);
int main()
{
    int num;
    printf("Enter number to check: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}
void prime(int i)
{
    int x, count = 0;
    for (x = 1; x <= i; x++)
    {
        if (i % x == 0)
            count++;
    }
    if (count == 2)
        printf("Entered number is Prime.");
    else
        printf("Entered number is not Prime.");
}