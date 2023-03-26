#include "main.h"
/**
 * _islower - print _alphabet
 * @c: parameter
(*
* Description: prints a specific string
(* section header)
* Return: the demanded string
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar ('\n');
	return (0);
}
