#include "main.h"
/**
 * _strlen_recursion - function
 * @s: string
 * Description: a function that prints a string
 * Return: a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
