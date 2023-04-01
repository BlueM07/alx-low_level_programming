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
		r = 1;
		return (r);
		putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		return (r);
		putchar('0');
	}
	else if (n < 0)
	{
		r = -1;
		return (r);
		putchar('-');
	}
return (0);
}
