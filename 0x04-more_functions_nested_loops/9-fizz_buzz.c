#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 *
 * Return: On success 1.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
	if (((i % 3) == 0) && ((i % 5) == 0))
	{
	printf("FizzBuzz ");
	}
	else if ((i % 3) == 0)
	{
	printf("Fizz ");
	}
	else if ((i % 5) == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
}
putchar('\n');
return (0);
}
