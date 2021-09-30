/* 1. Write a menu driven program in C to perform the following tasks:
a. Perform ADDITION of TWO user given numbers.
b. Perform SUBTRACTION of TWO user given numbers
c. Perform MULTIPLICATION of TWO user given numbers
d. Perform DIVISION of TWO user given numbers*/

#include <stdio.h>
int main()
{
    int num1, num2, rslt, choice;
    char ch;
    do
    {
        printf("\nPlease enter the 1st integer :");
        scanf("%d", &num1);
        printf("\nPlease enter the 2nd integer :");
        scanf("%d", &num2);
        printf("Please choose from the given menu below- \n");
        printf("Press 1 to Perform ADDITION of TWO integers.\n");
        printf("Press 2 to Perform SUBSTRACTION of TWO integers.\n");
        printf("Press 3 to Perform MULTIPLICATION of TWO integers.\n");
        printf("Press 4 to Perform DIVISION of TWO integers.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            rslt = num1 + num2;
            printf("Result is : %d", rslt);
            break;
        case 2:
            rslt = num1 - num2;
            printf("Result is : %d", rslt);
            break;
        case 3:
            rslt = num1 * num2;
            printf("Result is : %d", rslt);
            break;
        case 4:
            rslt = num1 / num2;
            printf("Result is : %d", rslt);
            break;
        default:
            printf("ERROR!");
            break;
        }
        printf("\n Do you want to continue??? \n Press Y to continue.\n Press N to EXIT  ");
        scanf("%c", &ch);
    } while (ch == 'y');
    printf("EXTI");
    return 0;
}