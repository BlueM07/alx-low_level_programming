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
	int n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = (len - 1) / 2;
	while (str[len] != '0')
	{
		if (len >= n)
		{	
			putchar(str[len]);
			n++;
		}
	}
	putchar('\n');
}
