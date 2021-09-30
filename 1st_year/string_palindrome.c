#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf(" Enter he string to check for Palindrome: ");
    gets(str1);
    strcpy(str2, str1); // Coping str1 to str2
    strrev(str2);       // Reversing str2
    if (strcmp(str1, str2) == 0)
        printf("Given string is a Palindrome String.");
    else
        printf("Entered string is not a Palindrome string.");
    return 0;
}

/*void main()
{
    char str[100];
    int i, len, flag = 0;
    printf(" Enter he string to check for Palindrome: ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    printf("Given string is a Palindrome String.");
    else
        printf("Entered string is not a Palindrome string.");
    return 0;
}*/