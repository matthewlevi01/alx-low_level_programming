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
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					putchar(',');
			}
		}
	}
	return (0);
}
