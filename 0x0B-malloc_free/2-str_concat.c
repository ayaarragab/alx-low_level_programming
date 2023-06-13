#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - conctatinates two strings
 * @s1: string1
 * @s2: string2
 * Return: char pointer on the concatintaed string
*/
char *str_concat(char *s1, char *s2)
{
	char *string_a;

	unsigned int size1, size2, i, j, k;

	if (s1 == NULL)
	{
		size2 = strlen(s2) + 1;
		string_a = (char *)malloc(size2);
		if (string_a == NULL)
		return (NULL);
		for (j = 0; j < size2 - 1; j++)
		string_a[j] = s2[j];
		string_a[size2 - 1] = '\0';
		return (string_a);
	}
	if (s2 == NULL)
	{
		size1 = strlen(s1) + 1;
		string_a = (char *)malloc(size1);
		if (string_a == NULL)
		return (NULL);
		for (i = 0; i < size1 - 1; i++)
			string_a[i] = s1[i];
		string_a[size1 - 1] = '\0';
		return (string_a);
	}
	size1 = strlen(s1) + 1;
	size2 = strlen(s2) + 1;
	string_a = (char *)malloc(size1 + size2 - 1);
	if (string_a == NULL)
		return (NULL);
	for (i = 0, j = size1 - 1, k = 0;
	i < size1 - 1, j < (size1 + size2 - 2); i++, j++, k++)
	{
		string_a[i] = s1[i];
		string_a[j] = s2[k];
	}
	string_a[size1 + size2 - 2] = '\0';
	return (string_a);
}
