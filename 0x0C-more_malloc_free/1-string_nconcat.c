#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates s1 to n letters of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n. bytes
 * Return: the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;

	unsigned int l1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
	{
		con_str = "";
		return (con_str);
	}
	l1 = strlen(s1);
	if (n >= strlen(s2))
		n = strlen(s2);
	con_str = (char *)malloc(l1 + n + 1);
	if (con_str == NULL)
	{
		free(con_str);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		con_str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		con_str[l1 + j] = s2[j];
	}
	con_str[l1 + n] = '\0';
	return (con_str);
}
