#include "main.h"

/**
 * _isupper - decription of the function
 * @c: parameter
 * Return: function result
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
	putchar('\n');
	return (0);
}

