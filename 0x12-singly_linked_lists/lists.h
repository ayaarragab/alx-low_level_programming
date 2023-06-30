#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct first_list - struct
 * @str: string
 * @len: length
 * @next: self refrential struct
*/
typedef struct first_list
{
	char *str;
	size_t len;
	struct first_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
