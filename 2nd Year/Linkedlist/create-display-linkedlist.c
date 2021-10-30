#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * insert(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(1* sizeof(struct node));
    struct node * temp = head;
    if(ptr == NULL){
        printf("Memory can't be allocated.\n");
    }
    ptr -> data = data;
    ptr -> next = NULL;
    if(head == NULL){
        head = ptr;
        return head;
    }
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = ptr;
    return head;
}

struct node * insertAtFirst(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = NULL;
    if(head == NULL){
        head = ptr;
        return head;
    }
    ptr -> next = head;
    head = ptr;
    return head;
}

void linkedListPrint(struct node * ptr){
    if(ptr == NULL){
    printf("Linedlist is empty, please enter data first.\n");
    }
    while(ptr != NULL){
        printf("%d ->  ", (ptr -> data));
        ptr = ptr -> next;
    }
    printf("NULL");
}

int main()
{
    struct node * head = NULL;

    int x = 1, item, s, nodes, val; 
        while (x == 1){
            printf("\nEnter 1 to add data into linkedlist. \nEnter 2 to insert data at first. \nEnter 3 to Display \nEnter 4 to EXIT.\n\n");
            scanf("%d", &s);
            switch(s){
                case 1:
                    printf("Enter number of nodes you want to create: ");
                    scanf("%d", &nodes);
                    for(int i = 0; i < nodes; i++){
                        printf("Enter data for node %d: ", i + 1);
                        scanf("%d", &val);
                        head = insert(head, val);
                    }
                    break;
                case 2:
                    printf("Enter value to be entered: ");
                    scanf("%d", &val);
                    head = insertAtFirst(head, val);
                    break;
                case 3:
                    linkedListPrint(head);
                    break;
                case 4:
                    x = -1;
                    printf("Quiting...\n");
                    break;
                default:
                    printf("Please choose correct option.\n");
            }
        }

    return 0;
}