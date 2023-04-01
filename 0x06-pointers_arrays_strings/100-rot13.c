#include "main.h"
/**
 * rot13 - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
char *rot13(char *str)
{
	int i;
	int j;
	char a[] = "abcdefghijiklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[i] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = str[i + 13];
			}
		}
	}
	return (str);
}
