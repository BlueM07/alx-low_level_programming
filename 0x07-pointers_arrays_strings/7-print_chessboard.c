#include "main.h"
/**
 * print_chessboard - function to set memory
 * @a: array
 * Description: function to set memory with a constant byte
 * Return: pointer to the memory area
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}




