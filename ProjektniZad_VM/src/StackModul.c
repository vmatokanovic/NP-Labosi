#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    int capacity;
    struct node *ptr;
}*top,*top1,*temp;

void push(int data);
void pop();
void displayElements();
void delAllElements();
void create();
void delStack();

void isEmpty();
void isFull();

void create()
{
    top = NULL;
}

void push(int data)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
}

void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value: %d", top->info);
    free(top);
    top = top1;
}

void topelement()
{
	int topEl = top->info;
    printf("Last element of stack is: %d \n", topEl);
}

void displayElements()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty! \n");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d \n", top1->info);
        top1 = top1->ptr;
    }
 }

void delStack()
{
    top1 = top;

    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;
}

void isEmpty(){
	if (top == NULL)
	        printf("\n Stack is empty.");
	else
		printf("\n Stack is not empty.");
}

int main(){
	create();
	isEmpty();
	push(2);
	push(5);
	push(7);
	isEmpty();
	topelement();
	return 0;
}
