// Your name is stored in one array . Copy it to another array by modifying as follows
// replace the vowel by '\0' and 
// replace every space in your name by k numbers of spaces (assume k = length of your name )
// display the newname copied to another array in reverse order


#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char newname[50];
    int i,j,k;
    printf("Enter your name: ");
    scanf("%s",str);
    printf("Your name is: %s\n",str);
    
    for(i=0; i <= sizeof(str); i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = ' ';
        }
    }
    printf("Your name without vowels is: %s\n",str);
    k = strlen(str);
    // for(i=0; str[i]!='\0'; i++)
    // {
    //     if(str[i]==' ')
    //     {
    //         for(j=0; j<k; j++)
    //         {
    //             newname[j] = ' ';
    //         }
    //     }
    //     else
    //     {
    //         newname[i] = str[i];
    //     }
    // }
    // newname[i] = '\0';
    // printf("Your new name is: %s\n",newname);
    // for(i=strlen(newname)-1; i>=0; i--)
    // {
    //     printf("%c",newname[i]);
    // }
    printf("New name in reverse order is %s\n",strrev(str));
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// int check_vowel(char);
// int main()
// {
//     char s[100], t[100];
//     int c, d = 0;
//     gets(s);
//     for (c = 0; s[c] != '\0'; c++)
//     {
//         if (check_vowel(s[c]) == 0)
//         {
//             t[d] = s[c];
//             d++;
//         }
//     }
//     t[d] = '\0';
//     strcpy(s, t);
//     printf("%s\n", s);
//     return 0;
// }
// int check_vowel(char ch)
// {
//     if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
//         return 1;
//     else
//         return 0;
// }