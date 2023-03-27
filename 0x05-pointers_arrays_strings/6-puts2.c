#include "main.h"
#include <string.h>
/**
 * puts2 - puts like print
 * Return: nothing
 * @str: string
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0 ; i < len ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
