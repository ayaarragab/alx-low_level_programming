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

	if (size != 0)
	{
		char *cc = malloc(size);

		for (i = 0; i < size; i++)
		{
			cc[i] = c;
		}
		return (cc);
		free(cc);
	}
	else
	{
		return (NULL);
	}
}
