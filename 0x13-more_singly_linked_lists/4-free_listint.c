#include "lists.h"
/**
 * free_listint - free list
 * @head: list's head
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *stored;

	while (head != NULL)
	{
		stored = head->next;
		free(head);
		head = stored;
	}
}
