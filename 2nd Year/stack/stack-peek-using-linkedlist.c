#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void stackTraversal (struct node * ptr){
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
    
}

int isEmpty (struct node * top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull (struct node * top){
    struct node * p = (struct node *)malloc (sizeof(struct node));
    if (p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push (struct node * top, int x){
    if(isFull(top)){
        printf("Stack Overflow!!\n");
    }
    else{
        struct node * n = (struct node *)malloc(sizeof(struct node));
        n -> data = x;
        n -> next = top;
        top = n;
        return top;
    }
}

struct node * pop (struct node * top){
    if(isEmpty(top)){
        printf("Stack Underflow!\n");
    }
    else{
        struct node * n = top;
        int x = n -> data;
        top = (top) -> next;
        free(n);
        printf("popped element is %d\n", x);
        return top;
    }
}

int peek(int index, struct node * top){
    struct node * ptr = top;
    for(int i = 0; (i < index - 1 && ptr != NULL); i++){
        ptr = ptr -> next;
    }
    if(ptr != NULL){
        return ptr -> data;
    }
    else {
        return -1;
    }
}

int stackTop(struct node * ptr){
    return ptr -> data;
}

int stackBottom(struct node * ptr){
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    return ptr -> data;
}

int main(){
    struct node * top = NULL;
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);

    stackTraversal(top);
    // printf("Value at position 1 is %d\n", peek(1,top));

    // for(int i = 1; i <= 4; i++){
    //     printf("Value at position %d is %d\n",i , peek(i,top));
    // }

    printf("Value of topmost element is %d\n", stackTop(top));
    printf("Value of bottom most element is %d\n", stackBottom(top));
    return 0;
}