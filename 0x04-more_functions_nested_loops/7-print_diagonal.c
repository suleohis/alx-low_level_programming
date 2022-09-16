#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: integer
 */

void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
int j;
j = i;
while (j > 0)
{
	_putchar(' ');
	j--;
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
