#include <stdio.h>
/**
* main - gives alphabet
* @a : is alphabet
(*
* main function produces the whole alphabet in lowercase
(* description header)
* Return: value of main is the alphabet
*/
int main(char a)
{
	int n;

	a = 122;
	for (n = 0; n <= 26; n++)
	{
		putchar(a);
		a--;
	}
	return (0);
}
