#include "main.h"

/**
 * _puts_recursion - decription of the function
 * @s: parameter
 * Return: function result
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	return (0);
}
