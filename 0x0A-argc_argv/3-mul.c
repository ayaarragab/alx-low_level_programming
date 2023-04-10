#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point function
 * @argc: argv length
 * @argv: vector array
 * Return: 0 if success 1 if error
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int i, mul;

	mul = 1;

	for (i = 1; i < 3; i++)
	{
		if (argv[i] == NULL)
		{
			printf("Error\n");
			return (1);
		}
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
