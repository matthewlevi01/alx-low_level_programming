#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the vlue of a pointer to a char
 * @s: char parameter to set
 * @to: char to set to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
