#include "lists.h"
/**
 * calc_len_list - calculates length of a list
 * @head: head
 * Return: length
*/
int calc_len_list(dlistint_t *head)
{
	dlistint_t *temp = head;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
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

	if (head == NULL || index >= calc_len_list(temp))
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
