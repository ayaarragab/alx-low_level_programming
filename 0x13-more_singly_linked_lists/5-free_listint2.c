#include "lists.h"
/**
 * free_listint2 - free list
 * @head: list's head
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *node = *head, *stored;

	if (head == NULL || *head == NULL)
		return;
	if (node == NULL)
		return;
	while (node != NULL)
	{
		stored = node->next;
		free(node);
		node = stored;
	}
	*head = NULL;
}
