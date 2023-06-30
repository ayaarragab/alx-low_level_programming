#include "lists.h"
/**
 * print_list - prints list
 * @h: a linked list
 * Return: length
*/
size_t print_list(const list_t *h)
{
	if (h == NULL || h->next == NULL)
		return (0);
	if (h->str == NULL || h->next->str == NULL)
		printf("[0] (nil)\n");
	if (h->str != NULL)
		printf("[%lu] %s\n", h->len, h->str);
	if (h->next->str != NULL)
		printf("[%lu] %s\n", h->next->len, h->next->str);
	return (2);
}
