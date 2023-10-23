#include "main.h"
#include <stdlib.h>

/**
 * whatsmyname - function
 * @argc: counter
 * @argv: vector
 * Return: prog name
 */
int whatsmyname(int argc, char *argv[])
{
	(void)argc;

	printf("prog name is: %s/n", *argv[0]);
	return (0);
}
