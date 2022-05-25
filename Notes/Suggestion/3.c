// 3. A program to count frequency of each alphabet in a string

#include <stdio.h>

int main(){
    char str[100];
    int i, j, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; i < 26; i++){
        for(j = 0; j < 100; j++){
            if(str[j] == i + 97){
                count++;
            }
        }
        if(count == 0){
            continue;
        }
        printf("%c = %d\n", i + 97, count);
        count = 0;
    }
    return 0;
}
