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
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
