#include "main.h"

/**
 *print_line - decription of the function
 *@n: parameter
 * Return: function result
 */
void print_line(int n)
{
	int i;

	for(i = 0; i <= n; i++)
	{
		if (n > 0)
		{	
		_putchar('_');
		}
	}
	_putchar('\n');
}
