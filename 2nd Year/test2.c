#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * insert(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(1 * sizeof(struct node));
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

void linkedListPrint(struct node *ptr){
    while (ptr != NULL){
        printf("Data - %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct node * reverse(struct node * head){
    struct node * current = head;
    struct node * prev = NULL;
    struct node * temp = NULL;
    while(current != NULL){
        temp = current -> next;
        current -> next = prev;
        prev = current;
        current = temp;
    }
    return(prev);
}

int search(int d, struct node * head){
    struct node * ptr = head;
    int i;
    if(head == NULL){
        return -1;
    }
    while(ptr != NULL){
        if(ptr -> data == d){
            return i;
        }
        ptr = ptr -> next;
        i++;
    }
    return -1;
}

void main() 
{
    int x;
    struct node * head = NULL;
    int nodes;
    printf("Enter the number of nodes you want: ");
    scanf("%d", &nodes);
    for(int i = 1; i <= nodes; i++){
        int dd;
        printf("Input data for node %d: ", i);
        scanf("%d", &dd);
        head = (insert(head, dd));
    }


    int s = 1;
    int item;
    while(s == 1){
        printf("\nPress 1 to reverse the linkedlist.\nPress 2 for search in the linkedlist.\nPress 3 to Display \nPress 4 to EXIT.\n\n");
        scanf("%d", &x);
        switch(x){
            case 1:
                head = reverse(head);
                printf("After reverse: \n");
                linkedListPrint(head);
                break;
            case 2:
                printf("Enter element to be searched: ");
                scanf("%d", &item);
                int index = search(item, head);
                if(index != -1){
                    printf("Element found at node %d\n", index+1);
                }
                else{
                    printf("Element not found.\n");
                }
                break;
            case 3:
                linkedListPrint(head);
                break;
            case 4:
                s = -1;
                break;
            default:
                printf("Please choose a correct option.");
        }
    }
}