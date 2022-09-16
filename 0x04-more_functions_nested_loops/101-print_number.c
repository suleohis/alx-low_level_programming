#include "main.h"

void print_number(int n)
{
	if (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) + '0');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n > 99)
	{
	       	_putchar((n / 100) + '0');
	       	_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n > 9)
	{
		_putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
	} else
	{
		_putchar(n + '0');
	}
}
