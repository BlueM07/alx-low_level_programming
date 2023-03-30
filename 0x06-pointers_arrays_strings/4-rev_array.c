#include "main.h"
/**
 * reverse_array - function
 * @a: parameter
 * @n : parameter
 * Decription: compare two strings
 * Return: if the two strings are the same  return value = 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0, (i < (n - 1) / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
