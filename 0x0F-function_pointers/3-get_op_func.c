#include "3-calc.h"
/**
 * get_op_func - a func that gets operator function
 * @s: operator
 * Return: result
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
