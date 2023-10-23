#include "main.h"

/**
 * whatsmyname - function
 * @argc: counter
 * @argv: vector
 * Return: prog name
 */
int whatsmyname(int argc, char *argv[])
{
	(void)argc;

	_putchar(*argv[0]);
	return (0);
}
