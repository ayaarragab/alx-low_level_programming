#include "function_pointers.h"
/**
 * print_name - func
 * @name: string to be printed
 * @f: pointer to func f
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
