#include "main.h"
/**
 * print_alphabet_x10 - print _alphabet
 * parameter
(*
* Description: prints a specific string
(* section header)
* Return: the demanded string
*/
void print_alphabet_x10(void)
{
        char a;
	int n;

	for (n = 0; n <= 10; n = n + 1)
		{
			for (a = 'a'; a <= 'z'; a++)
			{
				_putchar (a);
			}
	}
}
