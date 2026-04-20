#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int i;
void enqueue()
{
	int item;
	if(rear==MAX-1)
	{
		printf("queue overflow!\n");
		return;
	}
	printf("enter element to insert:");
	scanf("%d",&item);
	if(front==-1)
	front=0;
	queue[++rear]=item;
	printf("element inserted successfully\n");
}
void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("queue underflow!\n");
		return;
	}
	printf("deleted element:%d\n",queue[front++]);
}
void display()
{
	if(front==-1||front>rear)
	{
		printf("queue is empty\n");
		return;
	}
	printf("queue elements:\n");
	for(i=front;i<=rear;i++)
	printf("%d",queue[i]);
	printf("\n");
}
int main()
{
	int choice;
	do
	{
		printf("\n---queue menu---\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
		enqueue();
		break;
		case 2:
		dequeue();
		break;
		case 3:
		display();
		break;
		case 4:
		printf("existing program\n");
		break;
		default:
		printf("invalid choice!\n");	
		}
	}while(choice!=4);
	return 0;
}
