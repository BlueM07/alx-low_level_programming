#include "main.h"
/**
* print_square - draws a square
* @size: size of the square
* Description: draws a square in the terminal
* Return: a square
*/
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		putchar('\n');
			for (j = 0; j <= size; j++)
			{
				_putchar('#');
			}
		putchar('\n');
	}
}

