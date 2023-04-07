#include "main.h"
#include <string.h>
/**
 * _Strchr - locates first occurance of char
 * @s - string test
 * @c - variable char
 * Return: pointer to address of first occurance
 */
char *_strchr(char *s, char c)
{
	int len, i, j, k;

	char ptr[3];

	len = strlen(s);
	
	k = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			for (j = i; j < len-(i+1); j++)
			{
				*(ptr + k) = s[j];
				k++;
			}
		}
	}
	s = ptr;
	return (s);
}
