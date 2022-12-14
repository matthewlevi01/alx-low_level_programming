#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: destination string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (i == n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
