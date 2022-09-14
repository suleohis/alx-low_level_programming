#include "main.h"

/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int c)
{
if (c >= 0)
{
int i;
i = c % 10;
_putchar(i + '0');
return (i);
}
else
{
int i;
i = c * -1;
i = i % 10;
_putchar(i + '0');
return (i);
}
}
