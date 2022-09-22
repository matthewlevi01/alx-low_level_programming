#include <stdio.h>
#include "main.h"

/**
 * string_toupper - converts lowercases to uppercase
 * @str: string passed as a parameter
 *
 * Return: strings in uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'z';
		}
		i++;
	}

	return (str);
}
