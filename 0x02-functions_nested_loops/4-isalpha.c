#include "main.h"

/**
 * _isalpha - this is the entry point
 * Description: This checks if an input is a letter
 * @c: the character to be checked
 * Return: 1 or 0;
 */

int _isalpha(int c)
{
	if (c <= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
