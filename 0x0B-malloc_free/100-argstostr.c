#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * argstostr - arc argv
 * @ac: string length
 *@av: string
 *Return: pointer on result
 */
char *argstostr(int ac, char **av)
{
	int i;

	int k;

	int j;

	size_t len = 0;

	char *ptr;

	k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
{
	len += strlen(av[i]);
}

	ptr = calloc(len + ac + 1, sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
