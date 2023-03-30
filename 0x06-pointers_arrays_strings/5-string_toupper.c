#include "main.h"
/**
 * *string_toupper - function
 * @str : parameter
 * Decription: compare two strings
 * Return: if the two strings are the same  return value = 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
