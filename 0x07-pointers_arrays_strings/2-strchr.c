#include "main.h"
/**
 *  _strchr - function to set memory
 * @s: string
 * @c: char
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
return (NULL);
}

