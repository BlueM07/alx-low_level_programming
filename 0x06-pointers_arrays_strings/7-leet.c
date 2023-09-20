#include "main.h"

/**
 * *leet - decription of the function
 * @s: parameter
 * Return: function result
 */
char *leet(char *s)
{
	int i;
	char alow[5] = {'a', 'e', 'o', 't', 'l'};
	char aupper[5] = {'A', 'E', 'O', 'T', 'L'};
	int replace[5] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == alow[i] || s[i] == aupper[i])
		{
			s[i] = replace[i];
		}
	}
	return (s);
}
