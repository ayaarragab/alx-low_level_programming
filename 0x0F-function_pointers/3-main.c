#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - main function
 * @argv: vector array
 * @argc: length
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char op;

	int first_oper, second_oper, result;

	int (*operation)(int, int);

	op = argv[2][0];
	if (!(op == '-' || op == '+' || op == '*' || op == '/' || op == '%'))
	{
		puts("Error");
		exit(99);
	}
	first_oper = atoi(argv[1]);
	second_oper = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	result = operation(first_oper, second_oper);
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if ((op == '/' || op == '%') && *argv[3] == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", result);
	return (0);
}
