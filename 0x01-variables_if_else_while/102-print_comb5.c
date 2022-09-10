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

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
			}
		}
	}
	return (0);
}
