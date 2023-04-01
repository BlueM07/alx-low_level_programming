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
	int isi = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			neg = -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			isi = 1;
			res = res * 10 + s[i] - 48;
			i++;
		}
		if (isi == 1)
		{
			break;
		}
		i++;
	}
res = res *neg;
return (res);
}
