#include"main.h"

/**
 * binary_to_uint - permits the conversion of a binary to uint
 * @b: parameter
 * Return: rturn
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	int len = 0;
	unsigned int result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '\0' || (b[i] != '0' && b[i] != '1'))
		{
			return (0);
		}
		len++;
	}
	result = b[0];
	for (j = 1; j < len - 1; j++)
	{
		for (i = len - 1; i > 0; i--)
		{
		if (b[i] == '1' | b[i] == '0')
		{
			result = b[i] + 2 * j;
		}
		}
	}
	return (result);
}


