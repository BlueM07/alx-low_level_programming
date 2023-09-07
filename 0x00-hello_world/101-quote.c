#include <unistd.h>
/**
 * main - function that puts and returns a string
 *
 * Description: Longer description of the function
 * Return: The wanted result
 */
int main(void)
{
	cont char *message = "and that piece of art is useful\" - Dora Korpar, "
	       "	2015-10-19\n";
	
	write(2, message, sizeof(message) - 1);
	return (1);
}

