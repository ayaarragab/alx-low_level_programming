#include "main.h"
void print_alphabet_x10(void)
{
	int i = 0;
	char count, new_line = '\n';

	while (i <= 9 )
	{
		for (count = 'a'; count <= 'z' ; count++ )
		{
			_putchar(count);
		}
		_putchar(new_line);
		i++;
	}
}
