#include <stdio.h>

void main(){
    float r, pi;
    pi = 3.14;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    float area;
    area = pi * r * r;
    printf("Area of circle is: %0.3f", area);
}