#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 *
 * @a: Two-dimensional Arrays of char
 */


void print_chessboard(char (*a)[8])
{
int i, j, n, m;
i = 8;
j = 8;

for (n = 0; n < i; n++)
{
	for (m = 0; m < j; m++)
		_putchar(a[n][m]);
	_putchar('\n');
}
}
