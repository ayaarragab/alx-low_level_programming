#include "main.h"
#include <string.h>
/**
*_strcat - concatenate
*Return: pointer
*@dest: pointer to the variable n in the main.c
*@src: pointer
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
