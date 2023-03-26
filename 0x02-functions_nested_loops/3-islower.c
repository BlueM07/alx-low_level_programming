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
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
