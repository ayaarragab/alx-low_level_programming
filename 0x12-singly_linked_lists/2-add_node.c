#include "lists.h"
/**
 * add_node - adds node
 * @head: list's head
 * @str: string
 * Return: added node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	size_t length = strlen(str);

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = malloc(length + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		free(new_node->str);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
