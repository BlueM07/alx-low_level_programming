#include "main.h"
/**
 * _strlen - swaps the values of two integers
 * @s:  parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
return (len);
}
