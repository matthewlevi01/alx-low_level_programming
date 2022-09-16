#include <stdio.h>

/**
 * main - entry point
 * Description: this prints prime factors of a given number
 * Return: 0 on success
 */

int main(void)
{
	int number = 612852475143;
	int i, j, biggestPrime;
	int flag = 0;

	for (i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					flag = 1;
				}
			}
			if (flag == 0)
				biggestPrime = i;
		}
	}

	printf("%d\n", i);
}
