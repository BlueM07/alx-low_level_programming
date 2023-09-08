#include <stdio.h>
/**
 * main - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		putchar (n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
