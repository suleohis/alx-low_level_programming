#include <stdio.h>

/**
 * main - entry point
 * Return: always return 0
 *
 */
int main(void)
{
int hex;
for (hex = '0'; hex <= '9'; hex++)
putchar(hex);
for (hex = 'a'; hex <= 'f'; hex++)
putchar(hex);
putchar('\n');
return (0);
}
