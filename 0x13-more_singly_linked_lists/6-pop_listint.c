#include "lists.h"
/**
 * pop_listint - del
 * @head: pointer to pointer
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *del = *head;

	if (del == NULL || del->next == NULL)
		return (0);
	*head = del->next;
	return (del->next->n);
}
