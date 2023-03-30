#include "main.h"
/**
 * *cap_string - function
 * @str : parameter
 * Decription: compare two strings
 * Return: if the two strings are the same  return value = 0
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			str[i] + 1 = str[i] - 31;
		}
		i++;
	}
	return (str);
}
