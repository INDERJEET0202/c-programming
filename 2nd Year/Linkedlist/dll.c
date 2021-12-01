#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};

void printList(struct node * head){ //print the list
    struct node * temp = head;
    if(head == NULL){
        printf("Linkedlist is empty.\n");
    }
    else{
        while(temp != NULL){
            printf("%d -> ", temp->data);
            temp = temp -> next;
        }
        printf("NULL\n");
    }
}

void reversePrintList(struct node * head){ // Reverse print
    struct node * temp = head;
    if(head == NULL){
        printf("Linkledlist is Empty.\n");
        return;
    }
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        while(temp != NULL){
            printf("%d -> ", temp->data);
            temp = temp -> prev;
        }
        printf("HEAD\n");
}

struct node * createList(struct node * head, int data){ //create a list
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    struct node * temp = head;
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    if(head == NULL){
        head = newNode;
        return head;
    }
    else{
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> prev = temp;
    }
    return head;
}

int main(){
    struct node * head = NULL;
    //Switch case for different operations
    int choice, x = 1, data, nodes;
    printf(" 1. Create list\n 2. Print list\n 3. Reverse print list\n 4. Exit\n");

    while(x == 1){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter number of nodes: ");
                scanf("%d", &nodes);
                for (int i = 0; i < nodes; i++) {
                    printf("Enter data: ");
                    scanf("%d", &data);
                    head = createList(head, data);
                }
                break;
            case 2:
                printList(head);
                break;
            case 3:
                reversePrintList(head);
                break;
            case 4:    
                x = 0;
                printf("Quiting Program...\n");
                break;
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}