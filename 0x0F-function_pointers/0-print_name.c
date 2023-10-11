#include "main.h"

/**
 * print_name - decription of the function
 * @name: parameter
 * @f: parameter
 * Return: function result
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
#include "main.h"
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
		putchar(name[i]);
		i++;
	}
}
#include "main.h"
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
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}


