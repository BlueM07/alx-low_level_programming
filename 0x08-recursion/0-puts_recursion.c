#include "main.h"
/**
 * _puts_recursion - function
 * @s: string
 * Description: a function that prints a string
 * Return: a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
