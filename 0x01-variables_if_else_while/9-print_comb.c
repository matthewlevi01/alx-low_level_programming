#include <stdio.h>

/**
 * main - this is the main function
 * Description: This prints numbers and commas
 *
 * Return: returns 0
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit < '10'; digit++)
	{
		putchar(digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
