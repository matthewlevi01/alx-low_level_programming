#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * rev_string - prints a string in reverse followed by a new line
 * @str: string passed as a paremeter
 */

void rev_string(char *str)
{
	int i = strlen(str);

	while (i > 0)
	{
		putchar(str[i - 1]);
		i--;
	}
	putchar('\n');
}
