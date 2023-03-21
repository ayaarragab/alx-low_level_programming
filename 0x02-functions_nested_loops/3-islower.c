#include <ctype.h>
/**
 *_islower - determine wither it is lower 
 *Return: 0 if upper 1 if lower
 *c: the letter we test on 
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
