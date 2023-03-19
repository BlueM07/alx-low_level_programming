#include <stdio.h>
/**
* main - gives alphabet
* a is alphabet
(*
* main function produces the whole alphabet in lowercase
(* description header)
* Return: value of main is the alphabet
*/
int main(void)
{
int a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
