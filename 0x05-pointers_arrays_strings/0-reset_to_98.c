#include "main.h"
/**
 * reset_to_98 - reset n value to 98
 * @n: parameter
 * Description: reset value to 98
 * Return: n = 98
 */
void reset_to_98(int *n)
{
	int *p = &*n;
	*p = 98;
	return (*n);
}
