#include "main.h"
/**
* print_most_numbers - gives numbers
* Description: gives numbers from 0 to 14, 10 times
* Return: numbers 10 times
*/
void print_most_numbers(void)
{
int n;
int c;
for (n = 0; n < 10; n = n + 1)
{
for (c = '0'; c <= '14'; c = c + 1)
{
_putchar(c);
}
}
_putchar('\n');
}
