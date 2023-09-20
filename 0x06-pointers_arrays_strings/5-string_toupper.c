#include "main.h"

/**
 * *string_toupper - decription of the function
 * @s
 * Return: function result
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] + 32;
		}
	}
	return (s);
}
