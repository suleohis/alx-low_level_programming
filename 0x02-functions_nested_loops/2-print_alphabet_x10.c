#include "main.h"

void print_alphabet_x10(void)
{
	int chr,i;
	for (i = 0; i <= 9; i++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
