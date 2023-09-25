#include "main.h"

/**
 * *_strstr - decription of the function
 * @haystack: parameter
 * @needle: parameter
 * Return: function result
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
