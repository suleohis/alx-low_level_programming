#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: char
 */

void _puts(char *str)
{
int i, len;
len = strlen(str);
for (i = 0; i < len; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
