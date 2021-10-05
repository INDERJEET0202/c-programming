#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTravarsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;

    ptr->next = head;
    return ptr;
}

int main()
{
    struct node *head;
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;

    head = (struct node *)malloc(sizeof(struct node));
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    d = (struct node *)malloc(sizeof(struct node));

    head -> next = a;
    
    a -> data = 11;
    a -> next = b;

    b -> data = 34;
    b -> next = c;

    c -> data = 76;
    c -> next = d;

    d -> data = 2;
    d -> next = NULL;

    linkedListTravarsal(head);

    return 0;
}