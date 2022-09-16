#include <stdio.h>

/**
 * main - entry point
 * Description: this prints the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long biggestPrimeFactor, i, j;
	int flag = 0;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			/* check if factor is a prime number */
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					flag = 1;
					break;
				}
				else
					flag = 0;
			}
			if (i > 1 && flag == 0)
				biggestPrimeFactor = i;
		}
	}
	printf("%lu\n", biggestPrimeFactor);
	return (0);
}
