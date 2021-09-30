#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int vowel = 0, consonant = 0;

    printf("Enter any string: ");

    gets(str);

    p = str;

    while(*p != '\0')
    {
        if(*p == 'A' 
        || *p == 'E' 
        || *p == 'I' 
        || *p == 'O' 
        || *p == 'U'
        || *p == 'a' 
        || *p == 'e' 
        || *p == 'i' 
        || *p == 'o' 
        || *p == 'u')
            vowel++;

        else if ((*p >= 'a' && *p <= 'z') 
             || (*p >= 'A' && *p <= 'Z'))
            consonant++;

        p++;
    }

    printf("Number of Vowels in String: %d\n",vowel);
    printf("Number of Consonants in String: %d",consonant);
    return 0;
}