#include "main.h"

/**
 * print_sign - this is the entry
 * Description: this function prints sign
 * @n: character to be checked
 * Return: 1 or 0;
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (0);
}


