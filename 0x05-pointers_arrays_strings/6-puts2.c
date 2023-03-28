#include "main.h"
/**
 * puts2 - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void puts2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] % 2 == 0)
		{
			putchar (str[len]);
			len++;
		}
		else
		{
			len++;
		}
	}
putchar('\n');
}
