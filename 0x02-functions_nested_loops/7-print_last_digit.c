#include "main.h"
/**
 * print_last_digit - function that puts and returns a string
 * @n: parameter
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int print_last_digit(int n)
{
	int mod;
	int min;

	min = INT_MIN;
	mod = n % 10;
	if (n = min)
	{
		_putchar ('0' + mod);
                return (mod);
	}
	if (n >= 0)
	{
		_putchar ('0' + mod);
		return (mod);
	}
	else
	{
		n = n * -1;
		mod = n % 10;
		_putchar ('0' + mod);
		return (mod);
	}
}
