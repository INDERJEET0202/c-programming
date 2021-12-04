#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

struct node *root = NULL;

void insert(int data)
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node));
    struct node *current;
    struct node *parent;

    tempNode -> data = data;
    tempNode -> leftChild = NULL;
    tempNode -> rightChild = NULL;

    // if tree is empty
    if(root == NULL){
        root = tempNode;
    }
    else{
        current = root;
        parent = NULL;

        while(1){
            parent = current;

            // go to left of the tree
            if (data < parent -> data){
                current = current -> leftChild;

                // insert to the left
                if (current == NULL){
                    parent -> leftChild = tempNode;
                    return;
                }
            } // go to right of the tree
            else{
                current = current -> rightChild;

                // insert to the right
                if (current == NULL){
                    parent -> rightChild = tempNode;
                    return;
                }
            }
        }
    }
}

void pre_order_traversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        pre_order_traversal(root->leftChild);
        pre_order_traversal(root->rightChild);
    }
}

void inorder_traversal(struct node *root)
{
    if (root != NULL)
    {
        inorder_traversal(root->leftChild);
        printf("%d ", root->data);
        inorder_traversal(root->rightChild);
    }
}

void post_order_traversal(struct node *root)
{
    if (root != NULL)
    {
        post_order_traversal(root->leftChild);
        post_order_traversal(root->rightChild);
        printf("%d ", root->data);
    }
}

int main()
{
    int i, elements;
    int *j;
    printf("Enter the number of elements: ");
    scanf("%d", &elements);
    int *array = (int *)malloc(sizeof(int) * elements);
    printf("enter the head node: ");
    for (i = 0; i < elements; i++)
        scanf("%d", &array[i]);

    for (i = 0; i < elements; i++)
        insert(array[i]);

    printf("\nPreorder traversal: ");
    pre_order_traversal(root);

    printf("\nInorder traversal: ");
    inorder_traversal(root);

    printf("\nPost order traversal: ");
    post_order_traversal(root);

    return 0;
}