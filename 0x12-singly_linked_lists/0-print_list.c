#include "lists.h"
/**
 * print_list - prints list
 * @h: a linked list
 * Return: length
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
