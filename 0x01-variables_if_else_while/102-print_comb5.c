#include <stdio.h>

/**
 * main - this is the main executor function
 * Description: prints a combination of digits from 0 - 99
 *
 * Return: returns 0. Success value
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = i; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
