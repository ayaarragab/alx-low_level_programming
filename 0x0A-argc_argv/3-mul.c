#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argv: array vector
 * @argc: array length
 * Return: 1 if no nums 0 if success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	if (atoi(argv[1]) && atoi(argv[2]))
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
		printf("\n");
		return (0);
	}
	return (1);
}
