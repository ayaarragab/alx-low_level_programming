#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - _strdup
 *@str: string test
 *Return: pointer
 */
char *_strdup(char *str)
{
	int i;

	int size;

	char *cop;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	cop = malloc(size + 1);

	if (cop == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		cop[i] = str[i];
	cop[size] = '\0';
	return (cop);
}
