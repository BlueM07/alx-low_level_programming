#include "main.h"
/**
* print_number - draws a diagonal line
* @n : number of diagonal characters printed
* Description: draws a diagonal line in the terminal
* Return: a diagonal line
*/
void print_number(int n)
{
	int res1 = 0;
	int res2 = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * - 1;
	}
	res1 = ((n / 10) + 48);
	res2 = ((n % 10) + 48);
	_putchar(res1);
	_putchar(res2);
}
