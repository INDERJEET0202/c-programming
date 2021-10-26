#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if (ptr -> top  == -1){
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack * ptr){
    if (ptr -> top  == (ptr -> size -1)){
        return 1;
    }
    else {
        return 0;
    }
}

void push (struct stack *ptr, int value){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", value);
    }
    else{
        ptr -> top ++;
        ptr -> arr[ptr -> top] = value;
    }

}

int pop (struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot POP from the stack\n");
        return -1;
    }
    else{
        int value = ptr -> arr[ptr -> top];
        ptr -> top --;
        return value;
    }

}

int peek(struct stack *ptr, int i){
    int arrIndex = (ptr -> top - i + 1);
    if(arrIndex < 0){
        printf(" Not a valid position");
        return -1;
    }
    else{
        return ptr -> arr[arrIndex];
    }
}

int stackTop(struct stack *ptr){
    return ptr -> arr[ptr -> top];
}

int stackBottom(struct stack *ptr){
    return ptr -> arr[0];
}

int main(){
    struct stack *sp = (struct stack * ) malloc(1*sizeof(struct stack));
        sp -> size = 50;
        sp -> top = -1;
        sp -> arr = (int *) malloc (sp -> size * sizeof(int));
        printf("Stack has been created successfully\n");

        printf("Before pushing, Full - %d\n", isFull(sp));
        printf("Before pushing, Empty - %d\n", isEmpty(sp));
        push(sp, 5324);
        push(sp, 11);
        push(sp, 423);
        push(sp, 006);
        push(sp, 666);
        push(sp, 56);
        push(sp, 76);
        push(sp, 55);
        push(sp, 26);
        push(sp, 36);
        push(sp, 46); // ---> Stack Overflow
        push(sp, 100); 
        printf("After pushing, Full - %d\n", isFull(sp));
        printf("After pushing, Empty - %d\n", isEmpty(sp));

        // printf("Popped %d from the stack\n", pop(sp));

        printf("The value of index 5 is %d\n", peek(sp, 5));

        for (int j = 1; j <= sp -> top + 1; j++){
            printf("The value at position %d is %d\n", j, peek(sp, j));
        }

        printf("Top element of this stack is %d\n", stackTop(sp));
        printf("Bottom element of this stack is %d\n", stackBottom(sp));
    
    return 0;
}