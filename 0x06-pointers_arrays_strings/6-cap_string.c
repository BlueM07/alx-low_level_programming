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
		if (str[i] == 32 || str[i] == 44 || str[i] == 59 || str[i] == 46)
		{
			str[i] + 1 = str[i] - 31;
		}
		if (str[i] == 33 || str[i] == 63 || str[i] == 34 || str[i] == 40)
		{
			str[i] + 1 = str[i] - 31;
		}
		if (str[i] == 41 || str[i] == 123 || str[i] == 125)
		{
			str[i] + 1 = str[i] - 31;
		}
		if (str[i] == 9 || str[i] == 10)
		{
			str[i] + 1 = str[i] - 31;
		}
		i++;
	}
	return (str);
}
