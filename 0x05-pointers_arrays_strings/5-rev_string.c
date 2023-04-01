#include "main.h"
/**
 * rev_string - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void rev_string(char *str)
{
	int len;
	int i;
	char temp;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < ((len - 2) / 2); i++)
	{
		temp = str[i];
		str[i] = str[len - 2 - i];
		str[len - 2 - i] = temp;
	}
}
