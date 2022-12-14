#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the various sizes
 * of various types compiled and run
 *
 * And it is to return a 0 as output
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
