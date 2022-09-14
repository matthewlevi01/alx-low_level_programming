#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * Description: prints number from n to 98
 * @n: integer to start from
 */

void print_to_98(int n)
{
	int counter;

	for (counter = n; counter <= 98; counter++)
	{
		if (counter == 98)
		{
			printf("%d", counter);
		}
		printf("%d, ", counter);
	}

	for (counter = n; counter >= 98; counter--)
	{
		if (counter == 98)
		{
			printf("%d", counter);
		}
		printf("%d, ", counter);
	}
	printf("\n");
}
