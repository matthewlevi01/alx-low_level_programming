#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @str: string passed as a paremeter
 */

void print_rev(char *str)
{
	int i = strlen(str);

	while (i >= 0)
	{
		if (str[i] != '\n')
		{
			putchar(str[i]);
			i--;
		}
	}
	putchar('\n');
}
