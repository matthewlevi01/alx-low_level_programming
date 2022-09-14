#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * Description: prints number from n to 98
 * @n: integer to start from
 */

void print_to_98(int n)
{
	for (n; n < 98; n++)
	{
		printf("%d, ", n);
	}
	
	for (n; n > 98; n--)
	{
		printf("%d, ", n);
	}

	if (n == 98)
	{
		printf("%d", n);
	}
}
