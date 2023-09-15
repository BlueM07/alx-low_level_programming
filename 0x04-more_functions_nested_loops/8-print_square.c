#include "main.h"

/**
 *print_diagonal - decription of the function
 *@n: parameter
 * Return: function result
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (j = 0; j <= i; j++)
		{
			_putchar(32);
		}
	}
	}
	_putchar('\n');
}
