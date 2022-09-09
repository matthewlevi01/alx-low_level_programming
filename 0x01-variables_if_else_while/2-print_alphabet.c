#include <stdio.h>

/**
 * main - this is where functions are called
 * Description: this program prints all the alphabet in lowercase
 *
 * Return: Always return 0. Succes result.
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
