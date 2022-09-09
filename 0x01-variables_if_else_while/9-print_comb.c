#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 indicates success
 */
int main(void)
{
int chr;
for (chr = '0'; chr <= '9'; chr++)
{
putchar(chr);
if(chr !='9') 
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
