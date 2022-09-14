#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * Description: prints number from n to 98
 * @n: integer to start from
 */

void print_to_98(int n)
{
	int count = n;

	for (count = n; count < 98; count++)
	{
		printf("%d, ", count);
	}
	for (count = n; count > 98; count--)
	{
		printf("%d, ", count);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
}
