#include "main.h"
/**
 * print_sign - print _alphabet
 * @n: parameter
(*
* Description: prints a specific string
(* section header)
* Return: the demanded string
*/
int print_sign(int n)
{
	int r = 0;

	if (n > 0)
	{
		putchar('+');
		return (r);
	}
	else if (n == 0)
	{
		putchar('0');
		return (r);
	}
	else if (n < 0)
	{
		putchar('-');
		return (r);
	}
return (r);
}
