#include "main.h"
/**
 *  _strchr - function to set memory
 * @s: string
 * @c: char
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
char *_strchr(char *s, char c)
{
	int i;
	char *pc;

	pc = &c;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == 'c')
		{
			return (pc);
		}
	}
	return (0);
}

