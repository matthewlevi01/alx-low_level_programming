#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charachter c to stdout
 * @c: The character tp print
 *
 * Return: on success 1
 * on error, -1 is returned
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
