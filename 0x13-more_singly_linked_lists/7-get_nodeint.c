#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: get_nodeint_at_index
 * @index: get_nodeint_at_index
 * Return: get_nodeint_at_index value
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *node = head;
	while (count < index)
	{
		node = node->next;
		count++;
	}
	return (node);
}
