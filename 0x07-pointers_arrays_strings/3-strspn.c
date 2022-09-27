#include "main.h"
#include <stdio.h>

/**
 * _strspn - rreturns thr number of bytes in a string s
 * @s: string parameter to check
 * @accept: string parameter to be compared
 * Return: unsinged int at success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
