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
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}

