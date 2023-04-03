#include "main.h"
/**
 *  _memset - function to set memory
 * @s: string
 * @b: constant byte
 * @n: int
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
