#include "main.h"
#include <string.h>
#include<stdlib.h>
/**
 * string_nconcat - concatinate strings
 * @s1: string pointer
 * @s2: string2 pointer
 * @n: n to con
 * Return: pointer on the new s
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	unsigned int i;

	unsigned int len1;

	unsigned int len2;

	unsigned int len3;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	len3 = len1 + n + 1;
	result = malloc(len3 * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + n] = '\0';
	return (result);
}
