#include "main.h"
#include <stdio.h>

/**
 * whatsmyname - function
 * @argc: counter
 * @argv: vector
 * Return: prog name
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("prog name is: %s/n", argv[0]);
	return (0);
}
