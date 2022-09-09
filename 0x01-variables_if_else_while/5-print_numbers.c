#include <stdio.h>

/**
 * main - this is the main function of the program
 * Descrripton: prints single digits from 0-9
 *
 * Return: returns 0. success value
 */

int main(void)
{
	char digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
