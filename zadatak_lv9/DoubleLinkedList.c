#include "DoubleLinkedList.h"


// Creates empty EmployeeList
int EmployeeListCreate(EmployeeList* list)
{
	list->head = list->tail = NULL;
	list->size = 0;
	return 1;
}


// Frees all memory allocated by list
void EmployeeListDestroy(EmployeeList* list)
{
	if (!(list->size)) return;
	employee * current;
	current = list->tail;
	while (current != list->head)
	{
		current = current->prev;
		free(current->next);
	}
	free(current);
	list->head = list->tail = NULL;
	list->size = 0;
}


//Function inserts employee element to specific position (index) in the list
int EmployeeListInsert(EmployeeList* list, employee* element, int index)
{
	if ((index > list->size) || (index < 0)) return 0;
	
	if (!index)
	{
		element->next = list->head;
		element->next->prev = element;
		element->prev = NULL;
		list->head = element;
		list->size++;
		return 1;
	}

	if (index == list->size)
	{
		element->prev = list->tail;
		element->prev->next = element;
		element->next = NULL;
		list->tail = element;
		list->size++;
		return 1;
	}
	
	employee * current;
	int i;

	if (index < (list->size - index))
	{
		current = list->head->next;
		for (i = 1; i < index; current = current->next , i++);
		element->next = current;
		element->prev = current->prev;
		element->prev->next = element;
		current->prev = element;
		list->size++;
		return 1;
	}
	else
	{
		current = list->tail->prev;
		for (i = (list->size - 2); i > index; current = current->prev , i--);
		element->next = current;
		element->prev = current->prev;
		element->prev->next = element;
		current->prev = element;
		list->size++;
		return 1;
	}
}


//Function deletes employee element from specific position(index) in the list
int EmployeeListDelete(EmployeeList* list, int index)
{
	return 1;
}


// Function returns employee element at specific position (index) in the list
employee* EmployeeListGetElement(EmployeeList* list, int index)
{
	if ((index >= list->size) || (index < 0)) return NULL;
	
	if (!index)
	{
		return list->head;
	}

	if (index == (list->size-1))
	{
		return list->tail;
	}

	employee * current;
	int i;
	
	if (index < (list->size - index))
	{
		current = list->head->next;
		for (i = 1; i < index; current = current->next , i++);
		return current;
	}
	else
	{
		current = list->tail->prev;
		for (i = (list->size - 2); i > index; current = current->prev , i--);
		return current;
	}
}


//Function returns number of elements in the list
int EmployeeListSize (EmployeeList* list)
{
	return list->size;
}


// Prints all list elements on standard out
void EmployeeListDump (EmployeeList* list)
{
	if (!(list->size)) return;
	employee * current;
	current = list->head;
	do
	{
		printf("NAME:       %s", current->name);
		printf("GROUP:      %s", current->group);
		printf("EXPERIENCE: %f", current->experience);
		current = current->next;
	}
	while (current != NULL);
}
