#include "main.h"
/**
 * print_alphabet - print _alphabet
 * parameter
(*
* Description: prints a specific string
(* section header)
* Return: the demanded string
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a';  a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar ('\n');
}
