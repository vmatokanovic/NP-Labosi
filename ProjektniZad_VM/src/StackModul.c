#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char povr_vrijednost[20];	//jer funkcija vraca povratnu vrijednost, naziv i broj argumenata
    char naziv[20];
    char broj_arg[20];
    struct node *next;
}node;

typedef struct linked_list
{
	int max_size;
	int stack_count;
	struct node *head;
	struct node *top;
}stack;

node* new_node(char povr_vrijednost[], char naziv[], char broj_arg[]) {	//inicijalizacija node-a
	node *z;
	z = malloc(sizeof(struct node));
	int i = 0;
	for(i = 0; i < 20; i++){
		z->povr_vrijednost[i]=malloc(sizeof(char));
		z->povr_vrijednost[i] = povr_vrijednost[i];
		z->naziv[i]=malloc(sizeof(char));
		z->naziv[i] = naziv[i];
		z->broj_arg[i]=malloc(sizeof(char));
		z->broj_arg[i] = broj_arg[i];
	}
	z->next = NULL;
	return z;
}

stack* new_stack(int size) { //inicijalizacija stoga
	stack *s = malloc(sizeof(stack));
	s->head = NULL;
	s->top = NULL;
	s->max_size=size;
	s->stack_count=0;
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

void push(stack *s, char povr_vrijednost[], char naziv[], char broj_arg[]) {
if(is_empty(s)) { //ako je empty
	node *a;
	a = new_node(povr_vrijednost,naziv,broj_arg); //TU SI STAO, IDUCE pridruziti argumente i onda ih postavljati u stog
	for(int i = 0; i<20; i++)
	{
		a->povr_vrijednost[i] = povr_vrijednost[i];
		a->naziv[i] = naziv[i];
		a->broj_arg[i] = broj_arg[i];
	}
	s->head = a;
	s->top = a;
	s->stack_count++;
	printf("Pushani su elementi: %s %s, broj argumenata: %s\n", a->povr_vrijednost, a->naziv, a->broj_arg);
	}
else if (is_full(s)){
	printf("Stog je pun! Nije moguce dodati nove elemente.\n");
}
else {
	node *a;
	a = new_node(povr_vrijednost,naziv,broj_arg); //TU SI STAO, IDUCE pridruziti argumente i onda ih postavljati u stog
	for(int i = 0; i<20; i++)
		{
			a->povr_vrijednost[i] = povr_vrijednost[i];
			a->naziv[i] = naziv[i];
			a->broj_arg[i] = broj_arg[i];
		}
	s->top->next = a;
  	s->top = a;
  	s->stack_count++;
  	printf("Pushani su elementi: %s %s, broj argumenata: %s\n", a->povr_vrijednost, a->naziv, a->broj_arg);
	}
}

void pop(stack *s) {
	if(is_empty(s)) {
	  printf("Stog je prazan! Nije moguce izbaciti elemente.\n");
	}
	else {
	  if(s->top == s->head) {// only one node
		  printf("Popani su elementi: %s %s, broj argumenata: %s\n", s->head->povr_vrijednost, s->head->naziv, s->head->broj_arg);
		  free(s->top);
		  s->top = NULL;
		  s->head = NULL;
		  s->stack_count--;
	  }
	  else {
		  printf("Popani su elementi: %s %s, broj argumenata: %s\n", s->top->povr_vrijednost, s->top->naziv, s->top->broj_arg);
		  node *temp = s->head;
		  while(temp->next != s->top) // iterating to the last element
		  temp = temp->next;
		  temp->next = NULL;
		  free(s->top);
		  s->top = temp;
		  s->stack_count--;
	  }
	}
}

void delAllElements(stack *s)
{
    while (s->top != NULL)
    {
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
    			  s->stack_count--;
    		  }
    }
    printf("Svi elementi stoga su obrisani! \n");
}

void delStack(stack *s)
{
    delAllElements(s);
    free(s);
    printf("Stog je obrisan! \n");
}

void printElements(stack *s)
{
	int brojac = 0;
	if(is_empty(s)) {
		  printf("Stog je prazan! Nije moguce ispisati elemente.\n");
	}
	else {
		node *temp = s->head;
		while(brojac != s->stack_count){
			printf("Element: %s %s, broj argumenata: %s\n", temp->povr_vrijednost, temp->naziv, temp->broj_arg);
			temp = temp->next;
			s->top = temp;
			brojac++;
		} // iterating to the last element
	}
}

void printLastElement(stack *s)
{
	if(is_empty(s)) {
		  printf("Stog je prazan! Nije moguce zadnji element.\n");
	}
	node *temp = s->top;
	printf("Zadnji element: %s %s, broj argumenata: %s\n", temp->povr_vrijednost, temp->naziv, temp->broj_arg);
}


int main(){
	stack *s = new_stack(10);

	pop(s);
	push(s,"int","oduzmi","1");
	push(s,"float","mnozi","3");
	printLastElement(s);
	printElements(s);
	delStack(s);
	pop(s);
	return 0;
}
