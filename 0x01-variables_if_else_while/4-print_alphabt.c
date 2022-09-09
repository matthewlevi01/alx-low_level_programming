#include <stdio.h>

/**
 * main - this function will execute the functions
 * Description: prints all alphabets except q and e
 *
 * Return: returns 0. success value
 */

int main(void)
{
	char letter = 'a';

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'q' && letter != 'e')
			{
				putchar(letter);
			}
		}
	putchar('\n');
	return (0);
}
