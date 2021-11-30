#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * f = NULL;
struct node * r = NULL;

void printQueue(){
    while(f != NULL){
        printf("Data -> %d\n", f -> data);
        f = f -> next;
    }
}

int isEmpty(){
    if(f == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int value){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Queue is full, memory cannot be allocated.");
    }
    else{
        newNode -> data = value;
        newNode -> next = NULL;
        if(f == NULL){
            f = r = newNode;
        }
        else{
            r -> next = newNode;
            r = newNode;
        }
    }
}

int dequeue(){
    int val = -1;
    struct node * ptr = f;
    if(isEmpty()){
        printf("Queue is empty.");
    }
    else{
        f = f -> next;
        val = ptr -> data;
        free(ptr);
    }
    return val;
}

int main(){
        int n, value, choice, x = 1;
        while(x == 1){
            printf("\n1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch(choice){
                case 1:
                    printf("Enter number of elements you want to enter: ");
                    scanf("%d", &n);
                    for(int i = 1; i <= n; i++){
                        printf("Enter element %d - ", i);
                        scanf("%d", &value);
                        enqueue(value);
                    }   
                    break;
                case 2:
                    value = dequeue();
                    if(value == -1){
                        printf("Element can not be dequeued");
                    }
                    else{
                        printf("Element %d has been dequeued...", value);
                    }
                    // printf("Dequeued element %d", dequeue());
                    break;
                case 3:
                    printQueue();
                    break;
                case 4:
                    x = 0;
                    printf("Exiting...");
                    break;
                default:
                    printf("Invalid choice.");
            }
        }
    return 0;
}