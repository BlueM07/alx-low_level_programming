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
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}

