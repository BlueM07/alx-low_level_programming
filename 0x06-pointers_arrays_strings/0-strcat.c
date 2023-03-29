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
	dest = *dest + *src;
	return (dest);
}
