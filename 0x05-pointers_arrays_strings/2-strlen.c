#include "main.h"
/**
* _strlen - tells the length of the string
* Return: length
* @s : array of character test
*/
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		len++;

	return (i);
}
