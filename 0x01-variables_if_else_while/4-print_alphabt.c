#include <stdio.h>

/**
 * main - entry point
 * Return: always return 0
 *
 */
int main(void)
{
int chr;
for (chr = 'a'; chr <= 'z'; chr++)
{
	if (chr != 'q' && chr != 'e')
	{
		putchar(chr);
	}
}
putchar('\n');
return (0);
}
