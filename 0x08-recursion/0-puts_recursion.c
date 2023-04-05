#include "main.h"
/**
 * _puts_recursion - function
 * @s: string
 * Description: a function that prints a string
 * Return: a string
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
