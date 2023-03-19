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
char s1;
char s2;
char s3;
for (s1 = 'a' && s2 = 'f' && s3 = 'r' ; s1 <= 'z' && s2 <= 'z' && s3 <= 'z' && s1 != 'e' && s1 != 'q' ; s1++ && s2++ & s3++)
{
putchar(s1,s2,s3);
}
putchar('\n');
return (0);
}
