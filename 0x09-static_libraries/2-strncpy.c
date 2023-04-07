#include "main.h"
#include <string.h>
/**
*_strncpy - concatenate
*Return: pointer
*@dest: pointer to the variable n in the main.c
*@src: pointer
*@n: variable test
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
