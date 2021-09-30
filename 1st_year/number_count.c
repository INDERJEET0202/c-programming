#include <stdio.h>
int main()
{
    int num;         
    int count = 0; 
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("\nThe number of digits in an integer is : %d", count);
    return 0;
}