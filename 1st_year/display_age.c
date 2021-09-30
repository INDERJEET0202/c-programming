//to display the category of a citizen based on his/her age//
#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your AGE :");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Minor");
    }
    else if ( age >= 18 && age <= 60)
    {
        printf("Adult");
    }
    else 
    {
        printf("Senior");
    }
    return 0;
}