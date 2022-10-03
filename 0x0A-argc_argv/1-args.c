#include <stdio.h>

/**
 * main - entry into the program
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 on success
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
