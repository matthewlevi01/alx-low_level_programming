#include <stdio.h>

/**
 * main - exectures all functions
 * Description: main prints letters backwards
 *
 * Return: returns 0. succes value
 *
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
