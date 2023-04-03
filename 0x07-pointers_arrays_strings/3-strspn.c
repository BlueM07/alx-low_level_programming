#include "main.h"
/**
 *  _strspn - function to set memory
 * @s: string
 * @accept: char
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;

	while (*s)
	{
		if (*s != *accept)
		{
			s++;
		}
		else
		{
			len = len + 1;
		}
	}
	return (len);
}


