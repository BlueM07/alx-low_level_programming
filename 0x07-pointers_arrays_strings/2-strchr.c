#include "main.h"

/**
 * *_strchr - decription of the function
 * @s: parameter
 * @c: parameter
 * Return: function result
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = &c;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (p);
		}
	}
	return (0);
}
