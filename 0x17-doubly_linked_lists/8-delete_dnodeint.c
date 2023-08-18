#include "lists.h"
/**
 * calc_len_list - calculates length of a list
 * @head: head
 * Return: length
*/
unsigned int calc_len_list(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/**
 * delete_dnodeint_at_index - delete dnodeint at index
 * @head: head of list
 * @index: index
 * Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *current, *nextnode;
	unsigned int i = 0;

	if (*head == NULL || index >= calc_len_list(*head))
		return (-1);
	if (index == 0)
	{
		(*head)->next->prev = NULL;
		(*head) = (*head)->next;
		free(head);
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	current = temp;
	if (current->next != NULL)
	{
		nextnode = current->next;
		current->prev->next = nextnode;
		nextnode->prev = current->prev;
		free(current);
		return (1);
	}
	current->prev->next = NULL;
	current->prev = NULL;
	free(current);
	return (1);
}
