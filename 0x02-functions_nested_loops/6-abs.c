#include "main.h"

/**
 * _abs - entry point
 * Desctiption: this function returns the absolute value of a parameter
 * @n: the number to be tested
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	return (0);
}
