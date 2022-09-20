#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * rev_string - prints a string in reverse followed by a new line
 * @str: string passed as a paremeter
 */

void rev_string(char *str)
{
	int l = 0, i = 0;
	char z;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		z = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = z;
	}
}
