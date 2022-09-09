#include <stdio.h>

/**
 * main - this is the function that will exc ute other functions
 * Description: This program prints lowercase letters, then upper case letters
 *
 * Return: Returns 0 always. Success value
 */

int main(void)
{
	char letter = 'a';

		for (letter = 'a'; letter <= 'Z'; letter++)
			putchar(letter);
	putchar('\n');
	return (0);
}
