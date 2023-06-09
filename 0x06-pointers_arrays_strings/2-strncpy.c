#include "main.h"
/**
 * _strncpy - swaps the values of two integers
 * @dest: parameter
 * @src: parameter
 * @n: max used from src
 * Description: swaps the values of two integers
 * Return: values swaped
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
