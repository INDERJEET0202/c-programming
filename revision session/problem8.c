#include <stdio.h>

int main()
{
    int a = 1, *c;
    int b = 10, *d;
    c = &a;
    d = &b;
    printf("Before swapping value of a is %d and b is %d\n", *c, *d);

    *c = *c + *d;
    *d = *c - *d;
    *c = *c - *d;

    printf("After swapping value of a is %d and b is %d\n", *c, *d);

    return 0;
}