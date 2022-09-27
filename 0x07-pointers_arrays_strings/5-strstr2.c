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
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
