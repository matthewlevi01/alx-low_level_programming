#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 when equal, < 0 if non-matching character in s1
 * is lower than that of s2, > 0 if non-matching character
 * in s1 is greater than that of s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
