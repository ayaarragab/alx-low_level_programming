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
	int size = strlen(str);

	int i;

	char *cop = malloc((size + 1) * sizeof(char));

	if (str == NULL || cop == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' ; i++)
		cop[i] = str[i];

	cop[size] = '\0';
	return (cop);
}
