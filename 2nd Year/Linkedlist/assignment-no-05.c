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

struct node * insertAtFirst(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = NULL;
    struct node * temp = head;
    if(ptr == NULL){
        printf("Memory can't be allocated");
    }
    if(head == NULL){
        head = ptr;
        return head;
    }
    ptr -> next = head;
    head = ptr;
    return head;
}

struct node * insertAtPos(struct node * head, int position, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = NULL;
    struct node * temp = head;
    struct node * p = head;
    int j = 0;
    while(p != NULL){
        p = p -> next;
        j++;
    }
    if(j < position){
        printf("Invalid position.\n");
    }
    if(ptr == NULL){
        printf("Memory can't be allocated");
    }
    int i  = 1;
    while(i != position - 1){
        temp = temp -> next;
        i++;
    }
    ptr -> next = temp -> next;
    temp -> next = ptr;
    return head;
}

struct node * insertAtEnd(struct node* head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Memory can't be allocated");
    }
    struct node *  temp = head;
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
    // int i = 0;
    while(temp != NULL){
        printf("Data - %d\n", (temp -> data));
        temp = temp -> next;
        // i++;
    }
    // printf("NULL\n");
    // printf("%d", i);
}

struct node * deleteFirstNode(struct node * head){
    struct node * ptr = head;
    if(ptr == NULL){
        printf("Linked list is already empty!! \n");
        return head;
    }
    int data;
    data = head -> data;
    printf("First node containing value %d is deleted. \n", data);
    head = head -> next;
    free(ptr);
    return head;
}

struct node * deleteLastNode(struct node * head){
    struct node *ptr = head;
    struct node *q = head -> next;
    while(q->next !=NULL)
    {
        ptr = ptr -> next;
        q = q -> next;
    }
    
    ptr -> next = NULL;
    free(q);
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
    if(index == 1){
        printf("You can not delete first node by this function. Choose another option.");
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
    for (int i = 1; i < index - 1; i++)
    {
        ptr = ptr -> next;
        q = q -> next;
    }
    data = q -> data;
    printf("Deleted data is %d\n", data);
    ptr -> next = q -> next;
    free(q);
    return head;
}

struct node * deleteAtValue(struct node * head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    int x = 0, s, nodes, first, pos, second, value, pos1;
    int flag = 0;

    struct node * head = NULL;

    printf("Choices...");
    while(x == 0){
    printf("\n\n Enter 1 to Create linkedlist. \n <<< Insersion >>> \n Enter 2 to insert a node at the beginning.\n Enter 3 to insert node at position. \n Enter 4 to Insert node at end. \n Enter 5 to Display linkedlist. \n <<< Deletion >>> \n Enter 6 to Delete First node. \n Enter 7 to Delete at Position. \n Enter 8 to EXIT..\n\n");
    scanf("%d", &s);
    printf("\n");
        switch (s)
        {
        case 1:
            // Create linkedlist
            printf("Enter number of nodes you want: ");
            scanf("%d", &nodes);
            for(int i = 1; i <= nodes; i++){
                printf("Enter value for node %d: ", i);
                scanf("%d", &first);
                head = createList(head, first);
                flag = 1;
            }
            break;
        case 2:
            // insert a node at the beginning
            printf("Enter data: ");
            scanf("%d", &second);
            head = insertAtFirst(head, second);
            break;
        case 3:
            // insert node at given position
            printf("Enter position where do you want to enter: ");
            scanf("%d", &pos);
            printf("Enter value for node : ");
            scanf("%d", &value);
            head = insertAtPos(head, pos, value);
            break;
        case 4:
            // insert node at end
            printf("Enter value to be entered: ");
            scanf("%d", &value);
            head = insertAtEnd(head, value);
            break;
        case 5:
            // Display linkedlist
            displayLinkedList(head);
            break;
        case 6:
            // Delete first node
            head = deleteFirstNode(head);
            break;
        case 7:
            // Delete at position
            if(flag == 0){
                printf("Please create a list first. \n");
                break;
            }
            printf("Enter position of node to delete: ");
            scanf("%d", &pos1);
            head = deleteAtPosition(head, pos1);
            break;
        case 8:
            x = -1;
            printf("Quiting program...");
            break;
        default:
            printf("Please choose correct choice.");
        }
    }
    return 0;
}