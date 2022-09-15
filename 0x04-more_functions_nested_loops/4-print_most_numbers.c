#include "main.h"

/**
 *
 */ 
void print_most_numbers(void)
{
int chr;
for (chr = 0; chr < 10; chr++)
{
	if (chr == 2 || chr == 4)
	continue;
	_putchar(chr + '0');
}
_putchar('\n');
}
