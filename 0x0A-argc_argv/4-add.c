#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point unc
 * @argc: length of vector array
 * @argv: vector array
 * Return: 0 if success 1 if fail
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc ; i++)
	{
		if (argv[i] == NULL)
		{
			printf("%d\n", 0);
		}
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
