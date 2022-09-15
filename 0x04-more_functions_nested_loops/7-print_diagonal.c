#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * Description: prints diagonals
 * @n: parameter (number of diagonals)
 * Return: diagonals
 */

int print_diagonal(int n)
{
	int row, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (i = 1; i <= row; i++)
			{
				_putchar('\\');

				if (i > 1)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
