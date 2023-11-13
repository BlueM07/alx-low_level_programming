#include "main.h"
#include <stdio.h>
/**
 * get_bit - getbit
 * @n: number
 * @index: index s
 * Return: Value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hld;
	int b;

	if (index > 64)
		return (-1);

	hld = n >> index;

	return (hld & 1);
}
