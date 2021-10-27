#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * insert(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(1* sizeof(struct node));
    struct node * temp = head;
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

void linkedListPrint(struct node * ptr){
    if(ptr == NULL){
    printf("Linedlist is empty, please enter data first.\n");
    }
    while(ptr != NULL){
        printf("Data - %d\n", (ptr -> data));
        ptr = ptr -> next;
    }
}

int main()
{
    struct node * head = NULL;

    int x = 1, item, s, nodes, val; 
        while (x == 1){
            printf("\nEnter 1 to add data into linkedlist. \nEnter 2 to Display \nEnter 3 to EXIT.\n\n");
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
                    linkedListPrint(head);
                    break;
                case 3:
                    x = -1;
                    printf("Quiting...\n");
                    break;
                default:
                    printf("Please choose correct option.\n");
            }
        }

    return 0;
}