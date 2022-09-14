#include <stdio.h>

/**
 * main - main function
 * Description: prints fibonacci of 50 numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	long int x = 1, y = 2, z;
	int n;

	for (n = 1; n <= 98; n++)
	{
		z = x + y;
		if (n == 1 || n == 2)
		{
			printf("%ld", n);
		}
		else
			printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");

	return (0);
}
