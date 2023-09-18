#include "main.h"

/**
 * print_rev - decription of the function
 * @s: parameter
 * Return: function result
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
