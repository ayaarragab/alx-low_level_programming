#include "lists.h"
/**
 * list_len - prints the length of the linked list
 * @h: linked list
 * Return: number of elements in the linked list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			count++;
		h = h->next;
	}
	return (count);
}
