#include <stdio.h>

/**
 * main - this is the main function of the program
 * Descrripton: prints single digits from 0-9
 *
 * Return: returns 0. success value
 */

int main(void)
{
	int digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
