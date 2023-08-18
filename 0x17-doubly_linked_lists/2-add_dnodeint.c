#include "lists.h"
/**
 * add_dnodeint -  adds a node to a doubly linked list
 * @head: head of the linked list
 * @n: value of the added node
 * Return: list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (new == NULL)
		return NULL;
	new->n = n;
	if (*head == NULL)
	{
		(*head) = new;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
