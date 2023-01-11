#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * createList(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * temp = head;
    if(ptr == NULL){
        printf("Memory can't be allocated");
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

void displayLinkedList(struct node * head){
    struct node * temp = head;
    if(temp == NULL){
    printf("Linedlist is empty, please enter data first.\n");
    }
    int i = 0;
    while(temp != NULL){
        printf("Data - %d\n", (temp -> data));
        temp = temp -> next;
        i++;
    }
}

struct node * deleteFirstNode(struct node * head){
    struct node * ptr = head;
    if(ptr == NULL){
        printf("Linked list is already empty!! \n");
        return head;
    }
    int data;
    data = head -> data;
    printf("Data of node 1 which is being deleted is : %d \n", data);
    head = head -> next;
    free(ptr);
    return head;
}

struct node * deleteAtPosition(struct node * head, int index){
    struct node *ptr = head;
    struct node *temp = head;
    struct node *q = head -> next;
    if(ptr == NULL){
        printf("Linked list is already empty!! \n");
        return head;
    }
    int k = 0, data;
    while(temp != NULL){
        temp = temp -> next;
        k++;
    }
    if(k < index){
        printf("Invalid position.\n");
        return head;
    }
    for (int i = 1; i < index - 1; i++){
        ptr  = ptr -> next;
        q = q -> next;
    }
    data = q -> data;
    printf("Deletion completed successfully. Deleted data is %d\n", data);
    ptr -> next = q -> next;
    free(q);
    return head;
}

int main()
{
    int x = 0, s, nodes, first, pos, second, value, pos1;
    int flag = 0;

    struct node * head = NULL;

    printf("Choices...");
    while(x == 0){
    printf("\n\n Enter 1 to Create linkedlist. \n Enter 2 to Delete First node. \n Enter 3 to Delete at Position.\n Enter 4 to Display Linkedlist. \n Enter 5 to EXIT..\n\n");
    scanf("%d", &s);
    printf("\n");
        switch (s)
        {
        case 1:
            // Create linkedlist
            printf("Input number of nodes you want: ");
            scanf("%d", &nodes);
            for(int i = 1; i <= nodes; i++){
                printf("Enter value for node %d: ", i);
                scanf("%d", &first);
                head = createList(head, first);
                flag = 1;
            }
            break;
        case 4:
            // Display linkedlist
            displayLinkedList(head);
            break;
        case 2:
            // Delete first node
            head = deleteFirstNode(head);
            break;
        case 3:
            // Delete at position
            if(flag == 0){
                printf("Please create a list first. \n");
                break;
            }
            printf("Enter position of node to delete: ");
            scanf("%d", &pos1);
            head = deleteAtPosition(head, pos1);
            break;
        case 5:
            x = -1;
            printf("Quiting program...");
            break;
        default:
            printf("Please choose correct choice.");
        }
    }
    return 0;
}