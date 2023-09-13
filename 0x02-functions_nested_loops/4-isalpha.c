#include "main.h"
/**
 * _isalpha - function that puts and returns a string
 * @c: conditional parameter
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
