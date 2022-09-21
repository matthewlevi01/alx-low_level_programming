#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * puts_half - prints the second half of a string
 * @str: input parameter
 */

void puts_half(char *str)
{
	int i = 0;
	int length_of_the_string = strlen(str);
	int startPoint = length_of_the_string / 2;

	if (length_of_the_string % 2 != 0)
		startPoint = (length_of_the_string + 1) / 2;

	for (i = startPoint; i < length_of_the_string; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
