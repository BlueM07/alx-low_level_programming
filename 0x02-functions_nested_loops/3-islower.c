#include "main.h"
/**
 * _islower - function that puts and returns a string
 *
 * c : conditional paramtere
 * Description: Longer description of the function
 * Return: The wanted result
 */
int _islower(int c)
{
	char a;

	if (a <= 97 && a >= 122)
		{
			c = 1;
		}
	else
		{
			c = 0;
		}
	putchar(c);
	putchar('\n');
}
