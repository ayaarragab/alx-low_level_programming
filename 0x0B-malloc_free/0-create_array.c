#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: array size
 * @c: char c
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *cptr = malloc(size * sizeof(char));

	if (cptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size ; i++)
		cptr[i] = c;
	return (cptr);
}
