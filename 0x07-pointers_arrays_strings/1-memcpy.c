#include "main.h"

/**
 * *_memcpy - decription of the function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: function result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
