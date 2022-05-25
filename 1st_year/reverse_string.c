#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], i;
    int len , j;
    printf("Please enter a string: \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++);
    len = i;
    printf("Reverse string is: ");
    for(j = len-1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    return 0;
}