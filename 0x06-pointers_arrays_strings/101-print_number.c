#include "main.h"

/**
 * print_number - decription of the function
 * @n: parameter
 * Return: function result
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(48 + n * 1);
	}
	else
	{
		_putchar(48 + n);
	}
}

