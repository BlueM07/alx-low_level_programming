#include "main.h"

/**
 * puts2 - decription of the function
 * @str: parameter
 * Return: function result
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
