#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - conc all arguments
 * @ac: length
 * @av: 2d array
 * Return: NULL if ac == 0 or av == NULL
*/
char *argstostr(int ac, char **av)
{
	char *concatenated_args;

	int i, j, l, total_length;
	long unsigned int k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += (strlen(av[i]));
	}
	concatenated_args = (char *)malloc(total_length + 1);
	if (concatenated_args == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (j = 0; j < ac; j++)
	{
		for (l = 0; av[j][l] != '\0'; l++)
		{
			concatenated_args[k] = av[j][l];
			k++;
		}
		concatenated_args[k] = '\n';
		k++;
	}
	return(concatenated_args);
}
