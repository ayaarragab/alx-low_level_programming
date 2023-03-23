#include "main.h"
/**
* print_numbers - print from 1 to 9
* Return: void
*/
void print_most_numbers(void)
{
        char i, j = '\n';

        for (i = '0'; i <= '9'; i++)
        {
                if (i =='2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
        }
        _putchar(j);
}

