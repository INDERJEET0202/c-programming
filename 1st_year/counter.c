#include <stdio.h>
int main()
{
    char line[150];
    int vowels, consonant, numbers, space;

    vowels = consonant = numbers = space = 0;

    printf("Enter your line: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U')
        {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonant;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++numbers;
        }
        else if (line[i] == ' ')
        {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nNumbers: %d", numbers);
    printf("\nSpaces: %d", space);
    return 0;
}