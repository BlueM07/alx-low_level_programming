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
	int j;
	int ls1;
	int ls2;
	int cmp = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		ls1 = i + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		ls2 = i + 1;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		cmp = cmp + (s1[i] - s2[i]);
		i++;
	}
	if (ls1 > ls2)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			cmp = cmp + s1[j];
		}
	}
	else if (ls1 < ls2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			cmp = cmp - s2[j];
		}
	}
	return (cmp);
}
