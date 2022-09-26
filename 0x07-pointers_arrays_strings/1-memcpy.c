#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies n bytes from memory area
 * @dest: destination to copy bytes to
 * @src: the cource of bytes
 * @n: number of bytes to copy
 * Return: a char as success
 *
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
