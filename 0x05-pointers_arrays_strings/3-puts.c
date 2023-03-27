#include "main.h"
#include <unistd.h>
#include <string.h>
/**
* _puts - A function that is implement put char
* Return: nothing
* @str: variable test
*/
void _puts(char *str)
{
	int length;

	char a;

	a = '\n';
	length = strlen(str);
	write(1, str, length);
	_putchar(a);
}
