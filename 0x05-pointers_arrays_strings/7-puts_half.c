#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: char
 */

void puts_half(char *str)
{
int i, len, n;
len = strlen(str);
if (len % 2 == 0)
{
	n = len / 2;
} else
{
	n = (len - 2) / 2;
}
for (i = n; i < len; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
