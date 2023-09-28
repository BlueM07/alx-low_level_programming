#include "main.h"

/**
 * _sqrt_recursion - decription of the function
 * @n: parameter
 * Return: function result
 */
int _sqrt_recursion(int n)
{
	if (n < 0 || n % 10 == 2 || n % 10 == 3 || n % 10 == 7 || n % 10 == 8)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (0);
}
