#include "main.h"
/**
 * factorial - function
 * @n :number
 * Description: a function that prints a string
 * Return: factorial
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
	if (n > 0)
	{
		n = n * factorial(n);
		return (n);
	}
	return (0);
}
