//Write a menu driven program in C to perform the following:
//Case 1: check whether a user given number is Positive or Negative.
//Case 2: check whether a user given number is Odd or Even.
#include <stdio.h>
int main()
{
    int num, choice;
    printf("\nPlease enter the number :");
    scanf("%d", &num);
    printf("Press 1 to check wheather the humber is Positive or Negetive.\n");
    printf("Press 2 to check wheather the humber is Odd or Even.\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
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
        break;
    case 2:
        if (num % 2 == 0)
        {
            printf("%d is EVEN.", num);
        }
        else
        {
            printf("%d is ODD.", num);
        }
        break;
    default:
        printf("ERROR!");
        break;
    }
    return 0;
}