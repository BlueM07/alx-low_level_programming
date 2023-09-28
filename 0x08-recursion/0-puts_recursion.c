#include "main.h"

/**
 * _puts_recursion - decription of the function
 * @s: parameter
 * Return: function result
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		return (0);
	}
	_putchar(s + _putchar(s - 1));
}
