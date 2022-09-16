#include <stdio.h>

/**
 * main - entry point
 * Description: this prints the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */

int main(void)
{
	int number = 612852475143;
	int factor, primeFactor, i, j;


	for (i = 1; i < number; i++)
	{
		if (i > 1 && number % i == 0)
		{
			factor = i;

			/* check if factor is a prime number */
			for (j = 1; j < factor; j++)
			{
				if (j > 1 && factor % j != 0)
				{
					primeFactor = factor;
				}
			}
		}
	}
	printf("%d\n", primeFactor);
}
