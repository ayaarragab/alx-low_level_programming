#include "lists.h"
/**
 * get_dnodeint_at_index - get node at specific index
 * @head: head
 * @index: index
 * Return:specified node or null on failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index && temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
