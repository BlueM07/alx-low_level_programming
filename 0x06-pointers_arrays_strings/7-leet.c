#include "main.h"
/**
 * leet - swaps the values of two integers
 * @str: parameter
 * Description: swaps the values of two integers
 * Return: values swaped
 */
char *leet(char *str)
{
	int i;
	int j = 0;
	char a[] = "'a''A''e''E''o''O''t''T''l''L'\0";
	int b[] = {4','4','3','3','0','0','7','7','1','1};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == a[j])
		{
			str[i] = b[j];
		}
	}
	return (0);
}
