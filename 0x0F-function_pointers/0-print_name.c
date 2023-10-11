#include "main.h"

/**
 * print_name - decription of the function
 * @name: parameter
 * Return: function result
 */
void print_name(char *name, void (*f)(char *))
{
	return (0);
}
/**
 * print_name_as_is - description
 * @name: parameter
 * Return: result
 */
void print_name_as_is(char *name)
{
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
}
/**
 * print_name_uppercase - description
 * @name: parameter
 * Return: result
 */
void print_name_uppercase(char *name)
{
	int i = 0;

	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			_putchar(name[i] + 'A' - 'a');
		}
		else
		{
			_putchar(name[i]);
		}
		i++;
	}
}
