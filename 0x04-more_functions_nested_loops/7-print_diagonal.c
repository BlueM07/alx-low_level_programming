#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @n : number of diagonal characters printed
* Description: draws a diagonal line in the terminal
* Return: a diagonal line
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i = i + 1)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
