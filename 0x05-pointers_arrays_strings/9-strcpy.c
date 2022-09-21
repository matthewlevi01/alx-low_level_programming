#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string to another destination
 * @dest: destination of copied string
 * @src: source of copied string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while ( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
