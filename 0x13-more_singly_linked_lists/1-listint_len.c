#include "lists.h"
/**
 * listint_len - prints the length of the linked list
 * @h: linked list
 * Return: number of elements in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
