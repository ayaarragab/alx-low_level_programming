#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: head
 * Return: n
*/
size_t dlistint_len(dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t n = 0;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
