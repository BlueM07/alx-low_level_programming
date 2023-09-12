#include <stdio.h>
/**
 * print_alphabet - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			for (a = 'a'; a <= 'z'; a++)
			{
				putchar(a);
			}
		}
	}
	putchar ('\n');
}
