#include "main.h"





/**
 * get_endianness - check 
 * Return: 0
 */



int get_endianness(void)
{
	int number;

	number = 1;
	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
