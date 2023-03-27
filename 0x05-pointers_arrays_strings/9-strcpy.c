#include "main.h"
#include <string.h>
/**
 * _strcpy - copy string src to dest
 * Return: dest pointer
 * @dest: variable1 test
 * @src: variable2 test
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
