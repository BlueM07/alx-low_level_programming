#include "main.h"
/**
 * print_last_digit - function that puts and returns a string
 * @n: parameter
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int print_last_digit(int n)
{
	int mod;
	
	mod = n % 10;
	_putchar ('0' + mod);
        return (mod);
}
