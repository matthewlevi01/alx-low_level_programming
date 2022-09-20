#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * rev_string - prints a string in reverse followed by a new line
 * @str: string passed as a paremeter
 */

void rev_string(char *str)
{
	int len = strlen(str);
	int i = len;
	
	while (i > len /2)
	{
		putchar(str[i - 1]);
		i--;
	}
	putchar('\n');
}
