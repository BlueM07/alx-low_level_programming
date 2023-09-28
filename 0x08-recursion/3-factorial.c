#include "main.h"

/**
 * factorial - decription of the function
 * @n: parameter
 * Return: function result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
