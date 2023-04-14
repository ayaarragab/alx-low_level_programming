#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;

	int size1;

	int size2;

	char *con;

	if (s2 == NULL && s1 != NULL)
		s2 = "";
	if (s1 == NULL && s2 != NULL)
		s1 = "";
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	size1 = strlen(s1);
	size2 = strlen(s2);
	con = malloc(size1 + size2 + 1);

	if (con == NULL)
		return (NULL);

	for (i = 0; i < size1 ; i++)
		con[i] = s1[i];

	for (i = 0; i < size2; i++)
	{
		con[i + size1] = s2[i];
		if (s2[i] == '\0')
			break;
	}
	con[size1 + size2] = '\0';
	return (con);
}
