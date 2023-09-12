#include "main.h"
/**
 * print_alphabet_x10 - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar ('\n');
	}
}
