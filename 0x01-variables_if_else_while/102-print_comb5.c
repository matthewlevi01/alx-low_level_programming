#include <stdio.h>

/**
 * main - this is the main executor function
 * Description: prints a combination of digits from 0 - 99
 *
 * Return: returns 0. Success value
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i /10) +48);
				putchar((i % 10) +48);
				putchar(' ');
				putchar((j / 10) +48);
				putchar((j % 10) +48);
				if ( i != 98 || j != 99)
				{
					putchar(',');
					puchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
