#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head: head
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	if (head == NULL)
		return (0);
	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
