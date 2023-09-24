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

	mod = n % 10;
	if (n > 0)
	{
		return ('0' + mod);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		n = n * -1;
		return ('0' + mod);
	}
}
