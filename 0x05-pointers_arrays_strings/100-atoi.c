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
	char a[] = "0123456789";
	int b[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			return (s[i]);
		}
	}
return (0);
}
