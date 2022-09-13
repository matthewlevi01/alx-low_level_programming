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
				int r = row * column;
				
				_putchar(r + '0');
				if (column != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				column++;
				_putchar ('\n');
			}
			row++;
		}
	}
}
