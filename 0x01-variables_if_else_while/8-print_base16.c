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
int n;
for (n = '0'; n <= '9'; n = n + 1)
{
putchar(n);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
