#include "main.h"

/**
 * print_binary - a function 
 *
 * @n: decimal 
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) 
		mask <<= length; 
	

	while (mask > 0)
	{
		

		if (n & mask) 
			_putchar('1');
		else 
			_putchar('0');

		mask >>= 1; 
	}
}


