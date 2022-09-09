#include <stdio.h>

/**
 * main - this is the main function
 * Description: This prints numbers and commas
 *
 * Return: returns 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
