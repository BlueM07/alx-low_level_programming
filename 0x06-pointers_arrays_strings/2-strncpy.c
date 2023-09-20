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
	int j;

	for (i = 0, j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
