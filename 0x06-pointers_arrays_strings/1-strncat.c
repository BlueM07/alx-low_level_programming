#include "main.h"

/**
 * *_strncat - decription of the function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: function result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (i = len, j = 0; j <= n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
