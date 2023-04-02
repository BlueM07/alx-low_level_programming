#include "main.h"
/**
 * print_last_digit - print _alphabet
 * @n: parameter
(*
* Description: prints a specific string
(* section header)
* Return: the demanded string
*/
int print_last_digit(int n)
{
	int r = 0;

	if (n < 0)
	{
		n = n * -1;
	}
	r = n % 10;
	putchar(r + 48);
	return (r);
}
