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

struct node * searchBST(struct node * root, int data){
    if (root == NULL){
        return NULL;
    }
    if( data == root -> data){
        return root;
    }
    else if(data < root -> data){
        return searchBST(root -> left, data);
    }
    else{
        return searchBST(root -> right, data);
    }
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    struct node *p5 = createNode(7);

    // Linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    p2 -> right = p5;
    
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \   \
    //  1   4   7

    int key;
    printf("Enter element you want to find...");
    scanf("%d", &key);

    struct node * n = searchBST(p, key);
    if( n != NULL){
        printf("Found %d", n -> data);
    }
    else{
        printf("Element not found.\n");
    }
    return 0;
}
