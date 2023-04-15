#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - implementation for calloc
 * @nmemb: var
 * @size: size
 * Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	if (nmemb > UINT_MAX / size)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
