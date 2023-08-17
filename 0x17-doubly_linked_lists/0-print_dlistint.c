#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: doubly linked list
 * Return: number of nodes
*/
size_t print_dlistint(dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
