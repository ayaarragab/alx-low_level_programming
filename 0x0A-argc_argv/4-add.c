#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_if_str_is_digit - check if string is digit
 * @str: string pointer
 * Return: 0
 */
int check_if_str_is_digit(char *str)
{
	unsigned int long counter;

	for (counter  = 0; counter < strlen(str) ; counter++)
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point unc
 * @argc: length of vector array
 * @argv: vector array
 * Return: 0 if success 1 if fail
 */

int main(int argc, char *argv[])
{
	int i;

	int str_to_dig;

	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_if_str_is_digit(argv[i]))
		{
			str_to_dig = atoi(argv[i]);
			sum = sum + str_to_dig;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
