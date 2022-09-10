#include <stdio.h>

/**
 * main - this is the main executor function
 * Description: prints a combination of digits from 0 - 99
 *
 * Return: returns 0. Success value
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		putchar(i/10);
		putchar(1%10);
	}
	
	return (0);
}
