#include <stdio.h>

int main()
{
    // int number1 = 5; // Datatype (name of the variable) = integer / character -> comment line

    int number1;
    int number2;
    printf("Enter two numbers: ");
    scanf("%d", &number1);
    scanf("%d", &number2);
    int answer;
    answer = number1 + number2;

    printf("The answer is %d", answer);
    return 0;
    
}



#include <stdio.h>

int main() 
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    
    // Else if statement
    
    // if(condition){
    //     if true ? action performed
    // }
    // else if(condition){
    //     if true ? action performed
    // }
    // else{
    //     action performed
    // }
    
    // if(a >= 18){
    //     printf("Yes you can vote");
    // }
    // else{
    //     printf("You cannont vote");
    // }
    
    
    // 10 - 18 -> child
    // 18 - 60 -> adult
    // 60 - 100 -> senior
    // 0, 999, 82134 -> Invalid age
    
    if (a < 17){
        printf("You are a child");
    }
    else if(a >= 18 && a < 60){
        printf("You are an Adult");
    }
    else{
        printf("You are senior");
    }
    return 0;
}
