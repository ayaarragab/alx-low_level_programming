#include <ctype.h>
#include <stdio.h>
/**
* isdigit - is it a digit
* Return: 1 if digit and 0 if not
* @c: variable test
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
