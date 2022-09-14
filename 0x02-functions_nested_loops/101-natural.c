#include <stdio.h>

/**
 * main - executor
 * Description: this prints sum of multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (0);
}
