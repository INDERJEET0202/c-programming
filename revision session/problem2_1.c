#include <stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex a,b,c;
    printf("Enter the 1st complex number's real part: ");
    scanf("%d", &a.real);
    printf("Enter the 1st complex number's imaginary part: ");
    scanf("%d", &a.img);


    printf("Enter the 2nd complex number's real part: ");
    scanf("%d", &b.real);
    printf("Enter the 2nd complex number's imaginary part: ");
    scanf("%d", &b.img);

    c.real = a.real + b.real;
    c.img = a.img + b.img;

    if(c.img >= 0)
        printf("%d + %d(i)", c.real, c.img);
    else
        printf("%d - %d(i)", c.real, c.img);
    return 0;
}