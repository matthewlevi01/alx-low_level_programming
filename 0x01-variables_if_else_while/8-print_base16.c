#include <stdio.h>
/**
 * main - this is rhe main function of this program
 * Description: this progrm prints hexadecimak numbers in lowercase
 *
 * Return: returns 0
 */

int main(void)
{
	int digit, letter;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + 0);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
