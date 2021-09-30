//SIMLE INTERREST//
#include <stdio.h>
void main()
{
    float p , r , t , si;
    printf("Please enter PRINCIPAL_AMOUNT :");
    scanf("%f", &p);
    printf("Please enter your INTEREST_RATE :");
    scanf("%f", &r);
    printf("Please enter TIME duration(year) :");
    scanf("%f", &t);
    si = (p * r * t ) / 100 ;
    printf("Your SIMPLE INTEREST is Rs: %f", si);
}