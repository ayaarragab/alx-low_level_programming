#include "lists.h"
/**
 * print_listint - prints list
 * @h: a linked list
 * Return: length
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
