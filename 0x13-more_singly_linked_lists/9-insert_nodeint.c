#include "lists.h"
/**
 * listint_len - prints the length of the linked list
 * @h: linked list
 * Return: number of elements in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: head
 * @idx: index
 * @n: n
 * Return: node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int count, length;

	length = listint_len(node);
	if (new_node ==  NULL || head == NULL || *head == NULL || idx > length)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	count = 0;
	while (count < idx)
	{
		node = node->next;
		count++;
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
