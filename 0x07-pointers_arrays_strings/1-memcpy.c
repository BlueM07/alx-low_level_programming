#include "main.h"
/**
 *  _memcpy - function to set memory
 * @dest: string
 * @src: constant byte
 * @n: int
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
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
