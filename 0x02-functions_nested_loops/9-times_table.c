#include "main.h"

/**
 * times_table - entry point
 * Description: This function prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		{
			int column = 0;

			while (column <= 9)
			{
				_putchar(row * column);
				if (column != 9)
				{
					_putchar(',');
				}
				column++;
			}
			row++;
		}
	}
}
