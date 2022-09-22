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
	int i, j = 0;
	char letters[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (str[i])
	{
		while (letters[j])
		{
			if (str[i] == letters[j])
			{
				str[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
