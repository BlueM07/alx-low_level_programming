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

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (str[len] >= 0)
	{
		putchar(str[len]);
		len--;
	}
putchar('\n');
}
