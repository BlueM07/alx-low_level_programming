#include "main.h"

/**
 * reverse_array - decription of the function
 * @a: parameter
 * @n: parameter
 * Return: function result
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp[1000];

	for (i = 0; i < n; i++)
	{
		temp[i] = a[i];
	}
	for (; i <= 1000; i++)
	{
		temp[i] = '\0';
	}
	for (i = n - 1, j = 0; j < n; i--, j++)
	{
		a[j] =  temp[i];
	}
}
