#include "main.h"

/**
 * print_number -  a function that prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
int chr;
for (chr = 0; chr <= 9; chr++)
{
	_putchar(chr + '0');
}
_putchar('\n');
}
