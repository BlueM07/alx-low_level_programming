#include "main.h"
/**
 * puts_half - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void puts_half(char *str)
{
	int len;
	int n1;
	int n2;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n1 = (len - 1) / 2;
	n2 = len / 2;
	if (len % 2 == 0)
	{
		len = n2;
		while (str[len] != '\0')
		{
			if (len >= n2)
		{
			putchar(str[len]);
			len++;
		}
		}
	}
	else if	(len % 2 != 0)
	{
		len = n1;
		while (str[len] != '\0')
		{
		if (len >= n1)
		{
			putchar(str[len]);
			len++;
		}
		}
	}
	putchar('\n');
}
