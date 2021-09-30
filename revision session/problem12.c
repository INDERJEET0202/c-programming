#include <stdio.h>

struct complex
{
    float real;
    float imag;
}a,b,c,result;

struct complex sum(struct complex a, struct complex b)
{
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

int main()
{
    printf("Enter 1st complex number: \n");
    printf("Real Part: ");
    scanf("%f", &a.real);
    printf("Imaginary Part: ");
    scanf("%f", &a.imag);

    printf("Enter 2nd complex number: \n");
    printf("Real Part: ");
    scanf("%f", &b.real);
    printf("Imaginary Part: ");
    scanf("%f", &b.imag);

    result = sum(a,b);

    printf("Sum of two given complex numbers are %0.3f + %0.3f(i)", result.real, result.imag);

    return 0;
}
