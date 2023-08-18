#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *nextnode = NULL;

	while (current != NULL)
	{
		nextnode = current->next;
		if (current->prev)
			current->prev->next = nextnode;
		if (nextnode)
			nextnode->prev = current->prev;
		free(current);
		current = nextnode;
	}
}
