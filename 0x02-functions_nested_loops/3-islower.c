#include "main.h"

/**
 * _islower - this function executes
 * Description: This function checks if a given argument is lowercase or not
 * @c: character to check
 * Return: 1 on success, 0 on failure
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
