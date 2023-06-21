#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - func
 * @name: string to be printed
 * @f: pointer to func f
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL)
    {
        return;
    }
    f(name);
}
