#include "main.h"
/**
*string_toupper - changes all lowercases letters of a string to upper
@str: parameter
*Return: returns a character
*/
char *string_toupper(char *src)
{
	int i;

	i = 0;

	while(src[i++])
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] -= 32;
	}
	return (src);
}
