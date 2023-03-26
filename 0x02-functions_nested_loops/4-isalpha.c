#include "main.h"
/**
 * _isalpha - print _alphabet
 * @c: parameter
(*
* Description: prints a specific string
(* section header)
* Return: the demanded string
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
