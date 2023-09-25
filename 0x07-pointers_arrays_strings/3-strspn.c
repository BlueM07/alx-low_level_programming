#include "main.h"

/**
 * *_strspn - decription of the function
 * @s: parameter
 * @accept: parameter
 * Return: function result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
