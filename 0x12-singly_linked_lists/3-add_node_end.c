#include "lists.h"
/**
 * add_node_end - add to the end
 * @head: head's list
 * @str: string to be duplicated
 * Return: new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *current;

	size_t length = strlen(str);

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = malloc(length + 1);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = length;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
