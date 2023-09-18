#include "main.h"

/**
 * print_rev - decription of the function
 * @s: parameter
 * Return: function result
 */
void print_rev(char *s)
{
	int i;
	int j = 0;
	int len = 0;
	char str[len];

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (i = len - 1; i >= 0; i--, j++)
	{
		str[j] = s[i];
	}
	strn[len] = '\0'
	_putchar('\n');
}
