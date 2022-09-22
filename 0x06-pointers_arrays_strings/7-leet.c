#include "main.h"
#include <stdio.h>

/**
 * leet - this function encodes a string
 * @str: string to be encoded
 * Return: encoded string
 *
 */

char *leet(char *str)
{
	int i = 0, j;

	char letters[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = code[j];
			}
		}
		i++;
	}
	return (str);
}
