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
	int length = strlen(str);
	int midPoint;

	if (lenght % 2 != 0)
		midPoint = (length - 1) / 2;
	else
		midPoint = length / 2;

	for (i = midPoint; midPoint < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
