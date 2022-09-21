#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source;
 * @n: number of maximum bytes to be added to the destination
 * Return: dest
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i++] <= n)
		i++;

	while (dest[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++
	}

	return (dest);
}
