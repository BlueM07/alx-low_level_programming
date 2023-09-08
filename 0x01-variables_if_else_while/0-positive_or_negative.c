#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%s is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%s is zero\n", n);
	}
	else
	{
		printf("%s is negative\n", n);
	}
	return (0);
}
