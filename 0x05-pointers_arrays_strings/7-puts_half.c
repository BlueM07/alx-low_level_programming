#include "main.h"

/**
 * puts_half - decription of the function
 * @str: parameter
 * Return: function result
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i + 1;
	}
	if (len % 2 == 0)
	{
		for (i = (len - 2) / 2; str[i] != '\0'; i++)
		{
		_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
