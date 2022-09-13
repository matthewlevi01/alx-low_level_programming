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
				int f, s;

				if (r >= 10 && r < 100)
				{
					f = r / 10;
					s = r % 10;
					_putchar('0' + f);
					_putchar('0' + s);
					if (column != 9)
					{
						_putchar(' ');
					}
					_putchar(' ');
				}
				else
				{
					_putchar('0' + r);
					if (column != 9)
					{
						_putchar(',');
					}
					_putchar(' ');
					_putchar(' ');
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
