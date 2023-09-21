#include "main.h"

/**
 * *cap_string - decription of the function
 * @s: parameter
 * Return: function result
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int k;
	char temp[7] = {' ', 9, 10, ',', ';', '.', '!'};
	char temp2[6] = {'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; temp[j] != '\0'; j++)
		{
			for (k = 0; temp[k] != '\0'; k++)
				if (s[i] == temp[j] || s[i] == temp[k])
				{
					s[i + 1] = s[i + 1] - 32;
				}
		}
	}
	return (s);
}
