#include "main.h"
#include <stdlib.h>
/**
 * create_array - creats an array
 * @size: size var
 * @c: char
 * Return: character pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array_chars;

	array_chars = (char *)malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(array_chars + i) = c;
	}
	if (array_chars == NULL)
	{
		free(array_chars);
		return (NULL);
	}

	array_chars[size] = '\0';
	return (array_chars);
}
