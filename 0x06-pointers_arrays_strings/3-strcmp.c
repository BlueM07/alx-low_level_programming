#include "main.h"
/**
 * _strcmp - function
 * @s1: parameter
 * @s2 : parameter
 * Decription: compare two strings
 * Return value: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int strcmp;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		strcmp = s1[i] - s2[i];
			if (strcmp == 0)
			{
				i++;
			}
	}
	return (strcmp);
}
