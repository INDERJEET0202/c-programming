// 90 > O
// 90 - 80  E
// 80 - 70 A
// 70 - 60 B
// 50 < F

#include <stdio.h>

void main(){
    // Nested if else
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    if(score > 90){ 
        printf("Your Grade is O"); 
    }
    else if(score <= 90 && score >= 80){
        printf("Your Grade is E");
    }
    else if(score < 80 && score >= 70){
        printf("Your Grade is A");
    }
    else if(score < 70 && score >= 60){
        printf("Your Grade is B");
    }
    else{
        printf("Your Grade is F");
    }
}