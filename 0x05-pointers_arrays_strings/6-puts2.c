#include "main.h"

/**
 * puts2 - a function that reverses a string.
 *
 * @str: char
 */

void puts2(char *str)
{
int i, len;
len = strlen(str);
for (i = 0; i < len; i = i + 2)
{
	_putchar(str[i]);
}
_putchar('\n');
}
