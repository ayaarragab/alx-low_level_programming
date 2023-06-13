#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: string variable
 * Return: string pointer
*/
char *_strdup(char *str)
{
	char *new_string;
	unsigned int size, i;

	size = strlen(str) + 1;
	if (size == 0)
	{
		return (NULL);
	}
	new_string = (char *)malloc(size);
	for (i = 0; i < size; i++)
	{
		new_string[i] = str[i];
	}
	new_string[size] = '\0';
	return (new_string);
}
