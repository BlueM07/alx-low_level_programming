#include "main.h"
/**
 * _puts - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
putchar('\n');
}

