#include "main.h"
/**
 * print_rev - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void print_rev(char *str)
{
	int len;
	int n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = len
		for (n = len; n >= 1; n--)
		{
			_putchar(str[len]);
		}
putchar('\n');
}
