#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
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

#endif
