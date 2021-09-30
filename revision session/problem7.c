#include <stdio.h>

int main()
{
    int a, *p;
    printf("Enter the value:");
    scanf("%d", &a);
    p = &a;
    printf("value of a is %d", *p);
    return 0;
}