#include "main.h"

/**
 * print_last_digit - this is the entry point
 * Description: this function prints the last digit
 * @n: the digit to be tested
 * Return: num
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (n < 0)
	{
		num *= -1;
	}
	return (num);
}
