#include "main.h"
/**
 * _atoi - swaps the values of two integers
 * @s: parameter
 * Description: swaps the values of two integers
 * Return: the pointer to dest
*/
int _atoi(char *s)
{
	int i;
	int j;
	

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			{
				s[i] = s[i + 48];
			}
			return (s[i]);
	}
return (0);
}
