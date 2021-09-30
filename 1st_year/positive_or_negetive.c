//POSITIVE or NEGETIVE//
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is POSITIVE", num);
    }
    else if (num == 0)
    {
        printf("ZERO is nither negetive nor positive");
    }
    else 
    {
        printf("%d is NEGETIVE", num);
    }
    return 0;
}