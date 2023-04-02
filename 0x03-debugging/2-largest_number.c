#include <stdio.h>
/**
* largest_number - returns the largest of 3 numbers
* @a: integer
* @b: integer
* @c: integer
* decription: causes an infinite loop
* Return: the largest integer
*/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b)
	{
		if (a >= c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	else
	{
		if (b >= c)
		{
			lagest = b;
		}
		else
		{
			largest = c;
		}
	}
return (0);
}
