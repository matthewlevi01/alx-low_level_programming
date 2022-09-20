#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @str: string passed as a paremeter
 */

void print_rev(char *str)
{
	int i = strlen(str);

	while (i > 0)
	{
		putchar(str[i]);
		i--;
	}
	putchar('\n');
}
