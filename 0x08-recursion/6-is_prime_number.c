#include "main.h"

/**
 * is_prime_number - decription of the function
 * @n: parameter
 * Return: function result
 */
int is_prime(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_prime(n, divisor - 1));
}
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
