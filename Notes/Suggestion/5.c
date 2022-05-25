// 5.	A program to check whether a string is palindrome not

#include <stdio.h>

int main(){
    char str[100];
    int i, j, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; i < 100; i++){
        if(str[i] == '\0'){
            break;
        }
    }
    for(j = 0; j < i / 2; j++){
        if(str[j] == str[i - j - 1]){
            count++;
        }
    }
    if(count == i / 2){
        printf("%s is a palindrome\n", str);
    }
    else{
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}