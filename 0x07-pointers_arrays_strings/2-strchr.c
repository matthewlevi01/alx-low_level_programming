#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns a ppointer to the first occurrence of a character
 * @s: string to check for a character
 * @c: character to check
 * Return: pointer on success
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *cpointer;

	while (s[i])
	{
		if (c == s[i])
		{
			cpointer = &s[i];
			break;
		}
	}
	return (cpointer);
}
