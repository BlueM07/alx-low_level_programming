#include "main.h"

/**
 * print_array - decription of the function
 * @a: parameter
 * @n: parameter
 * Return: function result
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[(n - 1)]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}


