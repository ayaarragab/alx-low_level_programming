#include <stdio.h>
/**
 * main - main function
 * @argv: vector arry
 * @argc: length
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for( i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
