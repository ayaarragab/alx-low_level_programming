#include <stdio.h>
/**
 * main - main function
 * @argv: argv array
 * @argc: argv length
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
