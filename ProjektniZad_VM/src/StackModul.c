#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char *povr_vrijednost;	//jer funkcija vraca povratnu vrijednost, naziv i broj argumenata
    char *naziv;
    char *broj_arg;
    struct node *next;
}node;

typedef struct linked_list
{
	int max_size;
	int stack_count;
	struct node *head;
	struct node *top;
}stack;

node* new_node(char povr_vrijednost, char naziv, char broj_arg) {	//inicijalizacija node-a
	node *z;
	z = malloc(sizeof(struct node));
	z->povr_vrijednost=malloc(10*sizeof(char));
	z->povr_vrijednost = povr_vrijednost;
	z->naziv=malloc(10*sizeof(char));
	z->naziv = naziv;
	z->broj_arg=malloc(10*sizeof(char));
	z->broj_arg = broj_arg;
	z->next = NULL;
	return z;
}

stack* new_stack(int size) { //inicijalizacija stoga
	stack *s = malloc(sizeof(stack));
	s->head = NULL;
	s->top = NULL;
	s->max_size=size;
	return s;
}

int is_empty(stack *s) {
	if(s->head == NULL){
		return 1;
	}
	return 0;
}

int is_full(stack *s){
	if(s->stack_count==s->max_size){
		return 1;
	}
	return 0;
}

void push(stack *s, char povr_vrijednost, char naziv, char broj_arg) {
if(is_empty(s)) { //ako je empty
	node *a;
	a = new_node(povr_vrijednost,naziv,broj_arg); //TU SI STAO, IDUCE pridruziti argumente i onda ih postavljati u stog
	s->head = n;
	s->top = n;
	s->stack_count++;
	printf("Pushan je element: %c\n",n->povr_vrijednost);
	}
else if (is_full(s)){
	printf("Stog je pun! Nije moguce dodati nove elemente.\n");
}
else {
	s->top->next = n;
  	s->top = n;
  	s->stack_count++;
  	printf("Pushan je element: %c\n", n->povr_vrijednost);
	}
}

int pop(stack *s) {
	if(is_empty(s)) {
	  printf("Stog je prazan! Nije moguce izbaciti elemente.\n");
	}
	else {
	  int x = s->top->data;
	  if(s->top == s->head) {// only one node
		  free(s->top);
		  s->top = NULL;
		  s->head = NULL;
		  s->stack_count--;
	  }
	  else {
		  node *temp = s->head;
		  while(temp->next != s->top) // iterating to the last element
		  temp = temp->next;
		  temp->next = NULL;
		  free(s->top);
		  s->top = temp;
		  s->stack_count++;
	  }
	  return x;
	}
}





/*void topelement()
{
	int topEl = top->data;
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
        printf("%d \n", top1->data);
        top1 = top1->next;
    }
 }

void delStack()
{
    top1 = top;

    while (top1 != NULL)
    {
        top1 = top->next;
        free(top);
        top = top1;
        top1 = top1->next;
    }
    free(top1);
    top = NULL;
}

void isEmpty(){
	if (top == NULL)
	        printf("\n Stack is empty.");
	else
		printf("\n Stack is not empty.");
}*/

int main(){
	stack *s = new_stack(10);

	node *a, *b, *c;
	a = new_node(1,2,3);
	b = new_node(a,b,c);
	c = new_node(4,a,5);

	pop(s);
	push(s,a);
	push(s,b);
	return 0;
}
