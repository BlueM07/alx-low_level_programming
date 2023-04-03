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
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != 0; j++)
			{
				if (s[i] == accept[j])
				{
					len = len + 1;
				}
			}
		}
		else
		{
			return (len);
		}
	}
	return (len);
}


