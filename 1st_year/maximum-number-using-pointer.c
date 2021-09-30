#include <stdio.h>
void main()
{
    int a, b, *ptr1 = &a, *ptr2 = &b;

    printf(" Input the first number : ");
    scanf("%d", ptr1);
    printf(" Input the second  number : ");
    scanf("%d", ptr2);

    if ( *ptr1 > *ptr2)
    {
        printf(" %d is the maximum number.\n\n", *ptr1);
    }
    else
    {
        printf(" %d is the maximum number.\n\n", *ptr2);
    }
}