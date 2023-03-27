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
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
