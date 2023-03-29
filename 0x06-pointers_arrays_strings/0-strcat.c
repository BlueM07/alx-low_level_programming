#include "main.h"
/**
 * _strcat - swaps the values of two integers
 * @dest: parameter
 * @src: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
