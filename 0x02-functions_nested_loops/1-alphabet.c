#include "main.h"

/**
 * print_alphabet - this is the main executor function
 * Description: this program prints all the letters of the alphabets in
 * lowercases
 *
 * Result: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}

