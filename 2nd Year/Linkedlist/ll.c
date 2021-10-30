#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertAtFirst(struct node *head)
{
    int data;
    printf("Enter data you want to add: ");
    scanf("%d", &data);
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
    head -> data = 1;
    
    a -> data = 11;
    a -> next = b;

    b -> data = 34;
    b -> next = c;

    c -> data = 76;
    c -> next = d;

    d -> data = 2;
    d -> next = NULL;

    head = insertAtFirst(head);
    linkedListTraversal(head);

    return 0;
}