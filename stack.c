#include "lists.h"

stack_t *push(int x)
{
stack_t *top = NULL;
stack_t *new = (stack_t *)malloc(sizeof(stack_t));
	if (new == NULL)
		fprintf(stderr, "memory allcoation failed");
	new->prev = top;
	new->n = x;
	new->next = top;
	top = new;
	
}
