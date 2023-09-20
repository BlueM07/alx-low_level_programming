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
	int ls1 = 0;
	int ls2 = 0;
	int cmp = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		ls1 = i + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		ls2 = i + 1;
	}
	cmp = ls1 - ls2;
	return (cmp);
}
