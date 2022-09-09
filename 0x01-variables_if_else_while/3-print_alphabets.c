#include <stdio.h>

/**
 * main - this is the function that will exc ute other functions
 * Description: This program prints lowercase letters, then upper case letters
 *
 * Return: Returns 0 always. Success value
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A'

		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			putchar(lowerCase);
		}

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);

	putchar('\n');
	return (0);
}
