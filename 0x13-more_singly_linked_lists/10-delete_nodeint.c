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
/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: ptr to ptr
 * @index: index
 * Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	unsigned int count, length;

	length = listint_len(node);
	if (head == NULL || *head == NULL || index > length)
		return (-1);
	count = 0;
	while (count < index - 1)
	{
		node = node->next;
		count++;
	}
	node->next = node->next->next;
	return (1);
}
