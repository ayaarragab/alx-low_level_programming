#include "lists.h"
/**
 * add_nodeint - add_nodeint
 * @head: pointer to pointer head
 * @n: num
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
