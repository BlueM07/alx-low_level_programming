#include "main.h"

/**
 * print_most_numbers - decription of the function
 *
 * Return: function result
 */
void print_most_numbers(void)
{
	int n;
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
		for (j = '0'; j <= '4'; j--)
		{
			_putchar('1');
			_putchar(j);
		}
		_putchar('\n');
	}
}
