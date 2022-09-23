#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 */

void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		putchar('-');
		number = -n
	}

	if (number > 9)
	{
		print_number(number / 10);
	}

	putchar((number % 10) + '0');
}
