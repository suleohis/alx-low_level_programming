#include "main.h"

/**
 * print_numbers - print 0 to 9
 */

void print_number(void)
{
	int chr;
for (chr = 0; chr <= 9; chr++)
{
	_putchar(chr + '0');
}
_putchar('\n');
}
