#include "main.h"

/**
 * puts2 - decription of the function
 * @str: parameter
 * Return: function result
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (i = 0; s[i] != '\0'; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
