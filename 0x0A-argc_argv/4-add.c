#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argv: vector array
 * @argc: length
 * Return: 1 or 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int add = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
			return (0);
		}
		else if (atoi(argv[i]))
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("Error");
			printf("\n");
			return (1);
		}
	}
	printf("%d", add);
	printf("\n");
	return (0);
}
