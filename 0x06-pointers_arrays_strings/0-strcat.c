#include "main.h"

/**
 * *_strcat - decription of the function
 * @dest: parameter
 * @src: parameter
 * Return: function result
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
		}
	}
	dest[j] = '\0';
	return (dest);
}
