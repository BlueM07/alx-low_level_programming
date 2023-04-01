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
	int res = 0;
	int neg = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			neg = -1;
		}
		for (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - 48;
		}
	}
res = res *neg;
return (res);
}
