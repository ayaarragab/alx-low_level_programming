#include "3-calc.h"
/**
 * main - main function
 * @argv: vector array
 * @argc: length
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int first_oper, second_oper;

	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	first_oper = atoi(argv[1]);
	second_oper = atoi(argv[3]);
	printf("%d\n", operation(first_oper, second_oper));
	return (0);
}
