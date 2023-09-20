#include "main.h"

/**
 * *_strncpy - decription of the function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: function result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
