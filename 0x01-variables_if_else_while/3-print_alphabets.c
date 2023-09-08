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
	for (i = 0; a <= 122 ; a++)
	{
		putchar (a);
		i++;
	}
	a = 65;
	for (i = 0; a <= 90; a++)
	{
		putchar (a);
		i++;
	}
	putchar ('\n');
	return (0);
}
