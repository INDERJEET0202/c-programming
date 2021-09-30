#include <stdio.h>
void main()
{
    int num1;
    printf ("Please enter a number :");
    scanf ("%d",  &num1);
    if (num1 > 5)
    {
        printf("Condition is true");
    }
    else if (num1 = 5)
    {
        printf ("This  %d is equals to 5", num1  );
    }
    else
    {
        printf("Condition is false");
    }
}