#include <stdio.h>

void main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // int answer = 0;

    // for(int i=1;i<=number; i++){
    //     answer = answer + i;
    //     if (answer >= 500){
    //         break;
    //     }
    // }
    for(int i  = 0; i <= number; i++){
        printf("%d\n", i);
    }
    printf("%d\n", answer);
}

// check a character is vowel or not

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is a vowel.", ch);
    }
    else{
        printf("%c is not a vowel.", ch);
    }
    return 0;
}