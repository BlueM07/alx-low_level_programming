#include "main.h"
/**
 * *_strcpy - swaps the values of two integers
 * @dest: parameter
 * @src: parameter
 * Description: swaps the values of two integers
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src);
{
	int len;
	int n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = (len - 1) / 2;
	while (str[len] != '0')
	{
		if (len >= n)
		{	
			putchar(str[len]);
			n++;
		}
	}
	putchar('\n');
}
