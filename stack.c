#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int i;
void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("stack overflow!\n");
		return;
	}
	printf("enter element to push:");
	scanf("%d",&item);
	stack[++top]=item;
	printf("element pushed successfully.\n");
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow!\n");
		return;
	}
	printf("popped element:%d\n",stack[top--]);
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty.\n");
		return;
	}

	printf("stack elements:\n");
	for (i=top;i>=0;i--)

	printf("%d\n",stack[i]);
}
int main()
{
	int choice;
	do
	{
		printf("\n---stack menu---\n");
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				push();
				break;
				case 2:
				pop();
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
	} while(choice!=4);
	return 0;
}
