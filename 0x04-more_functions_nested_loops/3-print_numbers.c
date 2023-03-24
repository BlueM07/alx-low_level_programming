#include "main.h"
/**
 * print_numbers - prints numbers
(*
* Description: prin numbers from 0 to 9
(*section header)
* Return: line of numbers from 0 to 9
*/
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i = i + 1)
{
	_putchar(i);
}
_putchar('\n');
}
