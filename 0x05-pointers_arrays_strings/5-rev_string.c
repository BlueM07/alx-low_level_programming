#include "main.h"
/**
 * rev_string - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
void rev_string(char *str)
{
        int len;
        int n;

        len = 0;
        while (str[len] != '\0')
        {
                len++;
        }
        n = len - 1;
        for (n = len - 1; n >= 0; n--)
        {
                putchar(str[n]);
        }
putchar('\n');
}
