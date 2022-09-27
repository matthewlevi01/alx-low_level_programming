#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @needle: string parameter to check
 * @haystack: string parameter to be compared
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i])
			{
				if (needle[j + 1] != '\0')
				{
					j++;
					i++;
				}
				return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
