#include "main.h"
/**
* more_numbers - gives numbers
* Description: gives numbers from 0 to 14, 10 times
* Return: numbers 10 times
*/
void more_numbers(void)
{
	int i;
	int d;
	int c;

	for (i = 0; i < 10; i = i + 1)
	{
		for (c = 0; c < 15; c = c + 1)
		{
			if (c > 9)
			{
				_putchar('1');
			}
			_putchar(c % 10 + '0');
		}
	_putchar('\n');
	}
}	
