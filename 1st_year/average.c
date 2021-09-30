//AVERAGE//
#include <stdio.h>
void main()
{
    float num1, num2, num3, avg;
    printf("\nPlease enter 1st number :");
    scanf("%f", &num1);
    printf("Please enter 2nd number :");
    scanf("%f", &num2);
    printf("Please enter 3rd number :");
    scanf("%f", &num3);
    avg = (num1 + num2 + num3) / 3 ;
    printf("Average of the three numbers is : %f", avg);
}