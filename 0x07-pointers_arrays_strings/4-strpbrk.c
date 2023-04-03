#include "main.h"
/**
 *  _strpbrk - function to set memory
 * @s: string
 * @accept: char
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					return (s);
				}
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}


