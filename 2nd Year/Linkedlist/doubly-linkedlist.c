#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
    struct node * prev;
};

struct node * createList(struct node * head, int data) {
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    if (head == NULL) {
        head = ptr;
    } else {
        struct node * temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
    }
    return head;
}

void printList(struct node * head) {
    struct node * temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reversePrintList(struct node * head) {
    struct node * temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

struct node * insertAtFirst(struct node * head, int data) {
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;
    if (head != NULL) {
        head->prev = ptr;
    }
    head = ptr;
    return head;
}

struct node * insertAtEnd(struct node * head, int data) {
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    if (head == NULL) {
        head = ptr;
    } else {
        struct node * temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
    }
    return head;
}

struct node * insertAtPos(struct node * head, int data, int position) {
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    if (head == NULL) {
        head = ptr;
    } else {
        struct node * temp = head;
        int i = 0;
        while (i < position - 1) {
            temp = temp->next;
            i++;
        }
        ptr->next = temp->next;
        temp->next = ptr;
        ptr->prev = temp;
        if (ptr->next != NULL) {
            ptr->next->prev = ptr;
        }
    }
    return head;
}

struct node * deleteFirst(struct node * head) {
    if (head == NULL) {
        return head;
    }
    struct node * temp = head;
    head = head->next;
    free(temp);
    if (head != NULL) {
        head->prev = NULL;
    }
    return head;
}

struct node * deleteAtPos(struct node * head, int position) {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node * temp = head;
        int i = 0;
        while (i < position - 1) {
            temp = temp->next;
            i++;
        }
        if (temp->next == NULL) {
            printf("Cannot delete from last position\n");
        } else {
            temp->next = temp->next->next;
            if (temp->next != NULL) {
                temp->next->prev = temp;
            }
        }
    }
    return head;
}

struct node * deleteLast(struct node * head) {
    if (head == NULL) {
        return head;
    }
    struct node * temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    return head;
}

int main(){
    struct node * head = NULL;
    //Switch case for different operations
    int choice, x = 1, data, nodes;
    printf(" 1. Create list\n 2. Print list\n 3. Reverse print list\n 4. Insert at first\n 5. Insert at end\n 6. Insert at position\n 7. Delete first\n 8. Delete at position\n 9. Delete last\n 10. Exit\n");

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
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                head = insertAtFirst(head, data);
                break;
            case 5:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                break;
            case 6:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                printf("Enter the position: ");
                int position;
                scanf("%d", &position);
                head = insertAtPos(head, data, position);
                break;
            case 7:
                head = deleteFirst(head);
                break;
            case 8:
                printf("Enter the position: ");
                scanf("%d", &position);
                head = deleteAtPos(head, position);
                break;
            case 9:
                head = deleteLast(head);
                break;
            case 10:
                x = 0;
                printf("Quiting Program...\n");
                break;
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}