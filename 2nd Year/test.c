#include<stdio.h>
#include<stdlib.h>

struct str
{
    int d;
    struct str *next;
};

void InsertMid(struct str *,int);

void main()
{
    struct str *p;
    struct str *head;
    head = (struct str *)malloc(sizeof(struct str));
    p = head;
    int n;
    printf("Enter how many nodes you want - ");
    scanf("%d", &n);
    
    printf("Enter %d datas - \n",n);
    for(int i = 0; i < n; i++)
    {
    scanf("%d",&(p -> d));
    if(i != (n-1))
      {
      p -> next = (struct str *)malloc(sizeof(struct str));
      }

    else
      {
          p -> next = NULL;
      }
    
    p = p -> next;

    }


    InsertMid(head,n);

    printf("New list of data\n");
    p = head;
    for(int i = 0; i < n+1; i++)
    {
        printf("%d ,",p->d);
        p = p -> next;
    }
}



void InsertMid(struct str *ptr,int n)
{
    int md;
    struct str * mid=(struct str *)malloc(sizeof(struct str));
    printf("Enter the data to be inserted in middle: ");
    scanf("%d",&md);
    for(int i = 0; i < (n/2)-1; i++)
    {
        ptr = ptr -> next;
    }
    
    mid -> d = md;
    mid -> next = ptr -> next;
    ptr -> next = mid;


}


// Examaple - https://www.codesdope.com/blog/article/linked-lists-in-c-singly-linked-list/#:~:text=scanf%20(%22%25d%22%2C%26p%2D%3Edata),list%20by%20joining%20the%20nodes.