#include "main.h"
/**
 * _strncat - swaps the values of two integers
 * @dest: parameter
 * @src: parameter
 * @n: max used from src
 * Description: swaps the values of two integers
 * Return: values swaped
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
