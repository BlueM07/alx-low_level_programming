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
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar ('\n');
	}
}
