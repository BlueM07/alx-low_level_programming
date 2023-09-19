#include "main.h"

/**
 * *_strcpy - decription of the function
 * @dest: parameter
 * @src: parameter
 * Return: function result
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0' && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
