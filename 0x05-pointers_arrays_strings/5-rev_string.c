#include "main.h"

/**
 * rev_string - decription of the function
 * @s: parameter
 * Return: function result
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	char stemp[len];

	for (i = len - 1; i >= 0; i--, j++)
	{
		stemp[j] = s[i];
	}
	stemp[len] = '\0';
	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		s[i] = stemp[j];
	}
}
