#include "main.h"
/**
* print_line - draws a straight line
* @n : line length
* Description: draws a straight line in the terminal
* Return: a straight line
*/
void print_line(int n)
{
	int n;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
