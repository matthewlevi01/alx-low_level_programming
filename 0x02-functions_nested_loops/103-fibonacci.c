#include <stdio.h>

/**
 * main - main executor
 * Description: this prints the sum of even fibonnaci
 * numbers that are less than 4,000,000
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	long int fibValue1 = 1, fibValue2 = 2;
	long int fibValue = 0;
	long int evenFibValue = 2;

	while (fibValue <= 4000000)
	{
		fibValue = fibValue1 + fibValue2;
		if (fibValue % 2 == 0)
		{
			evenFibValue += fibValue;
		}
		fibValue1 = fibValue2;
		fibValue2 = fibValue;

		fibValue = fibValue1 + fibValue2;
	}
	printf("%ld", evenFibValue);
	printf("\n");
	return (0);
}
