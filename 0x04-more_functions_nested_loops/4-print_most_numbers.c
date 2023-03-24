#include "main.h"
/**
* print_most_numbers - gives numbers
* Description: gives numbers from 0 to 9 except 2 and 4
* Return: value of main is the alphabet
*/
void print_most_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n = n + 1)
{
if (n != '2' && n != '4')
{
putchar(n);
}
}
putchar('\n');
}
