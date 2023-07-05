#include "lists.h"
/**
 * free_listint2 - free list
 * @head: list's head
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *node = malloc(sizeof(listint_t)), *stored;
	if (node == NULL)
		return (NULL);
	node = *head;
	while (node != NULL)
	{
		stored = node->next;
		free(node);
		node = stored;
	}
	*head = NULL;
}
