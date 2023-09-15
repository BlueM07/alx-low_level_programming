#include "main.h"

/**
 * more_numbers - decription of the function
 *
 * Return: function result
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i <= 14; j++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
		_putchar('0' + i % 10)
		}
	}
		_putchar('\n');
}

