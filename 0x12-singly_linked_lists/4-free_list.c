#include "lists.h"
/**
 * free_list - free list
 * @head: list's head
 * Return: nothing
*/
void free_list(list_t *head)
{
    list_t *current = head, *next_node;

    while (current != NULL)
    {
        next_node = current->next;
        free(current->str);
        free(current);
        current = next_node;
    }
}
