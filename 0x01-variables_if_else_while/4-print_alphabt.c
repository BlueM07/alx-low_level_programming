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
char a;
for (a = 'a'; a <= 'z' && a != 'e' ; a++)
{
for (a = 'f'; a <= 'z' && a != 'q'; a++)
{
for (a = 'r'; a <= 'z'; a++)
putchar(a);
}
}

putchar('\n');
return (0);
}
