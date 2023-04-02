#include "main.h"
/**
 * print_number - swaps the values of two integers
 * @n: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void print_number(int n)
{
	int res1 = 0;
	int res2 = 0;

	if (n < 0)
	{
		putchar('-');
		n = n * -1;
	}
res1 = ((n / 10) + 48);
res2 = ((n % 10) + 48);
putchar(res1);
putchar(res2);
}
