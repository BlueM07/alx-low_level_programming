#include"main.h"

/**
 * binary_to_uint - permits the conversion of a binary to uint
 * @b: parameter
 * Return: rturn
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	unsigned int result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		len = len + i;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result = b[i] + 2 * (len - i);
		}
		else if (b[i] == '\0')
		{
			return (0);
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

