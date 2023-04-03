#include "main.h"
/**
 *  _strstr - function to set memory
 * @haystack: string
 * @needle: char
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; (needle[0] = haystack[i]); j++)
		{
			i = j;
			break;
		}
		if (needle[j] ==  haystack[j + 1])
		{
			j++;
		}
		else
		{
			break;
		}
	}
	return (NULL);
}


