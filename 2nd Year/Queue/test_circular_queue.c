#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
	int x;
	printf("enter data: ");
	scanf("%d",&x);
	if(front == -1 && rear == -1)
	{	
		rear++;
		queue[rear] = x;
		front = rear;
	}
	else if((rear+1)%N == front)
	{
		printf("queue is full\n");
	}
	else
	{
		rear = (rear+1)%N;
		queue[rear] = x;
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		printf("queue is empty\n");
		printf("underflow\n");
	}
	else if( front == rear)
	{
		printf("dequeued element is %d \n",queue[front]);
		front = rear = -1;
	}
	else
	{
		printf("dequeued element is %d \n",queue[front]);
		front = (front+1)%N;
	}
}

void display()
{
	if(front == -1 && rear == -1)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i = front;
		printf("queue is : ");
		while(i != rear)
		{
			printf("%d ",queue[i]);
			i = (i+1)%N;
		}
		printf("%d ",queue[i]);
	}
	printf("\n");
}

// void display()
// {
// 	if(front == -1 && rear == -1)
// 	{
// 		printf("queue is empty\n");
// 	}
// 	else
// 	{
// 		int i;
	
// 		for(i=front;i<(rear+1)%N;i++)
// 		{
// 			printf("element in the queue are %d\n",queue[i]);
// 		}
// 	}
// }


void peak()
{
	if(front == -1 && rear == -1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("top element of the queue is %d\n",queue[front]);
	}
}

int main()
{
	int m;
	while(1)
	{
		printf("enter 1 to enqueue:\n");
		printf("enter 2 to dequeue:\n");
		printf("enter 3 to peak:\n");
		printf("enter 4 to display:\n");
		printf("enter 5 to exit:\n");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peak();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}