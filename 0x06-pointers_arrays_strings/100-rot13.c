#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: the encoded string;
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotation[] = "NOPQRSTUVWZXYABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rotation[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
