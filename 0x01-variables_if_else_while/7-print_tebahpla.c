#include <stdio.h>
/**
* main - gives alphabet
(*
* main function produces the whole alphabet in lowercase
(* description header)
* Return: value of main is the alphabet
*/
int main(void)
{
	int n;
	char a;

	a = 122;
	for (n = 0; n <= 25; n++)
	{
		putchar(a);
		a--;
	}
putchar('\n');
return (0);
}
