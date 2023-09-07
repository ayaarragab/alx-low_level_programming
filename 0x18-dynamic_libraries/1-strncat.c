#include "main.h"
#include <string.h>
/**
*_strncat - concatenate
*Return: pointer
*@dest: pointer to the variable n in the main.c
*@src: pointer
*@n: variable test
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
