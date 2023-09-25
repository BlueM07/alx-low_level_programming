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
	int j;
	int ref;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			ref = i;
			j = 0;
			while (haystack[i] == needle[0] && needle[j] != '\0')
			{
			i++;
			j++;
			}
			if (needle[j] != '\0)
			{
				return (&haystack[ref]);
			}
			else
			{
				return (NULL);
			}
		}
		else 
		{
			return (NULL);
		}
	}
}
