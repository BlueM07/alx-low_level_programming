#include "main.h"

/**
 * swap_int - decription of the function
 * @a: parameter
 * @b: parameter
 * Return: function result
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
