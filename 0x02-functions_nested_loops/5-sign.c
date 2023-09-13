#include "main.h"
/**
 * print_sign - function that puts and returns a string
 * @n: conditional parameter
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n < 0)
	{
		putchar('-');
		return 0;
	}
	else if (n == 0)
	{
		putchar('0');
		return -1;
	}
}
