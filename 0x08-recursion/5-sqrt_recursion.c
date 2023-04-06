#include "main.h"
/**
 * _pow_recursion - function
 * @x : param
 * @y : param
 * Description: a function that prints a string
 * Return: factorial
 */
/**
 * _sqrt_recursion - function
 * @n : param
 * Description: a function that prints a string
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
	return (x * _pow_recursion(x, (y - 1)));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		if ((_pow_recursion((n, (n - 1)) * (_pow_recursion(n, (n - 1)))  == n)))
		{
			return (n - 1);
		}
	}
	return (0);
}
