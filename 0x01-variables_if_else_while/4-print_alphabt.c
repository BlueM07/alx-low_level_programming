#include <stdio.h>
/**
 * main - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 && a == 113)
		{
		a++;
		}
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
