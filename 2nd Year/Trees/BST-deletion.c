#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct  node* root){
    static struct node * prev = NULL;
    if(root!=NULL){
        if(!isBST(root -> left)){
            return 0;
        }
        if(prev != NULL && root -> data <= prev -> data){
            return 0;
        }
        prev = root;
        return isBST(root -> right);
    }
    else{
        return 1;
    }
}

struct node * itersearchBST(struct node * root, int data){
    while(root != NULL){
        if(data == root -> data){
            return root;
        }
        else if(data < root -> data){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
    return NULL; 
}

void insertBST(struct node * root, int data){
    struct node * prev = NULL; 
    while(root != NULL){
        prev = root;
        if(data == root -> data){
            printf("Element already exists.\n");
            return;
        }
        else if(data < root -> data){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
    struct node * new = createNode(data);
    if(data < prev -> data){
        prev -> left = new;
    }
    else{
        prev -> right = new;
    }
}

struct node *deleteNode(struct node * root, int value){
    if(value < root -> data){
        deleteNode(root -> left, value);
    }
}

int main(){
     
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    struct node *p5 = createNode(7);

    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    // p2 -> right = p5;
    
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \   \
    //  1   4   7

    int data;
    printf("Enter element you want to Insert. ");
    scanf("%d", &data);

    inOrder(p);
    
    return 0;
}