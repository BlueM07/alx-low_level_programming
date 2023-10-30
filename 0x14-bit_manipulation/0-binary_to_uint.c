#include"main.h"

/**
 * binary_to_uint - permits the conversion of a binary to uint
 * @b: parameter
 * Return: rturn
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len = 0;
	int j = 1;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0' && b[i] != '1'))
		{
			return (0);
		}
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result = result + j;
		}
		j = j * 2;
	}
	return (result);
}


