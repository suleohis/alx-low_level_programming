#include "main.h"

/**
 * print_square - a function that prints a square.
 *
 * @size: integer
 */

void print_square(int size)
{
int i, j;
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
	_putchar('#');
	j++;
}
_putchar('\n');
i++;
}
if (size < 1)
{
_putchar('\n');
}
}
