#include "main.h"
/**
 * _strlen_recursion - print kength of string recursively
 * @s: string test
 * Return: lendthgof the string
 */
int _strlen_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
