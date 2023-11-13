#include "main.h"
#include <stdio.h>




/**
 * flip_bits - flip
 * @n: first
 * @m: second
 * Return: number
 */





unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int c;

	dif = n ^ m;
	c = 0;

	while (dif)
	{
		c++;
		dif &= (dif - 1);
	}

	return (c);
}
