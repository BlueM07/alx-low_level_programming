#include "main.h"
/**
 * _strncpy - swaps the values of two integers
 * @dest: parameter
 * @src: parameter
 * @n: max used from src
 * Description: swaps the values of two integers
 * Return: values swaped
 */
char *_strncpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	
	while (dest[i] != '\0')
	{
		dest[i] =src [j];
		i++;
		j++;
	}
	if (src[j] == \0)
	{
		dest[i] = '\0';
	}
	return (dest);
}
