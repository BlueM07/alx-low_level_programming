#include <stdio.h>
/**
 * main - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int main(void)
{
	int i;
	char a;

	a = 97;
	for (i = 0; a <= 122 && a != 101 && a != 113; a++)
	{
		putchar (a);
		i++;
	}
	putchar ('\n');
	return (0);
}
