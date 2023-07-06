#include "main.h"
#include <string.h>
int is_palindrome(char *s)
{
	int length;
	
	length = strlen(s);
	return is_palindrome_helper(s, length);
}
