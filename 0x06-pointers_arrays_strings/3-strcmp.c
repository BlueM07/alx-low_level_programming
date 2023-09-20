#include "main.h"

/**
 * _strcmp - decription of the function
 * @s1: parameter
 * @s2: parameter
 * Return: function result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		cmp = s1[i] - s2[i];
		i++;
		if (cmp != 0)
		{
			return (cmp);
		}
	}
	return (cmp);
}
