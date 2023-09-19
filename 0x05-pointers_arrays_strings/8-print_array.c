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

	if (n >= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < (n - 1); i++)
		{	
			printf("%d, ", a[i]);
		}
	}
	printf("%d", a[(n - 1)]);
	printf("\n");
}


