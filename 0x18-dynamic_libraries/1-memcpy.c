#include "main.h"
/**
 * _memcpy - copy data of a memory adress to another memory adress
 * @dest: pointer variable
 * @src: pointer variable
 * @n: size
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
