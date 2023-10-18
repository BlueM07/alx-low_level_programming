#include <stdlib.h>
#include "main.h"




/**
 * *str_concat - strconcat
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */



char *str_concat(char *s1, char *s2)
{
	char *str3;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	str3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (str3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < l1)
		{
			str3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			str3[i] = s2[j];
			i++;
			j++;
		}
	}
	str3[i] = '\0';

	return (str3);
}
