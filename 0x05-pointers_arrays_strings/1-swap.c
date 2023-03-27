#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a:  parameter
 * @b: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void swap_int(int *a, int *b)
{
	int *p1 = &*a;
	int *p2 = &*b;
	int *temp;

	*temp = &*a;
	*p2 = &*a;
	*p1 = *temp;
}
