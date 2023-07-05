#include "lists.h"
/**
 * add_nodeint_end - adds at the end
 * @head: head
 * @n: n
 * Return: address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_h = malloc(sizeof(listint_t));

	listint_t *end = malloc(sizeof(listint_t));

	if (head_h == NULL)
	{
		free(head_h);
		return (NULL);
	}
	if (end == NULL)
	{
		free(end);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = end;
		end->next = NULL;
		end->n = n;
	}
	else
	{
		head_h = *head;
		while (head_h->next != NULL)
			head_h = head_h->next;
		head_h->next = end;
		end->next = NULL;
		end->n = n;
	}
	return (end);
}
