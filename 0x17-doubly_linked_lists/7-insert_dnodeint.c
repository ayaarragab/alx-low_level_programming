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
 * insert_dnodeint_at_index - insert dnodeint at index
 * @h: pointer to h pointer
 * @idx: index
 * @n: value
 * Return:he address of the new node, or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *nextnode, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || idx >= calc_len_list(*h))
		return (NULL);
	new_node->n = n;
	if ((*h) == NULL || idx == 0)
	{
		(*h)->prev = new_node;
		new_node->next = (*h);
		(*h) = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		i++;
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		nextnode = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = nextnode;
		nextnode->prev = new_node;
		return (new_node);
	}
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	return (new_node);
}
