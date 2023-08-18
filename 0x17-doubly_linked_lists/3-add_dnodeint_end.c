#include "lists.h"
/**
 * add_dnodeint_end -  adds a node to a doubly linked list
 * @head: head of the linked list
 * @n: value of the added node
 * Return: list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *)), *temp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		(*head) = new;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	temp = new;
	return (temp);
}
