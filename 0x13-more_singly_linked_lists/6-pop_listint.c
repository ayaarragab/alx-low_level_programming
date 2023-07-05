#include "lists.h"
/**
 * pop_listint - del
 * @head: pointer to pointer
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *del;

	int value;

	if (*head == NULL || head == NULL)
		return (0);
	del = *head;
	*head = del->next;
	value = del->next->n;
	free(del);
	return (value);
}