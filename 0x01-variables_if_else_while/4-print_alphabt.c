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
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
else "";
}
putchar('\n');
return (0);
}
