#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers.
 *
 * @a: integer
 * @n: integer
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	if (i <= 3)
	printf("%d, ", a[i]);
	else
	printf("%d", a[i]);
}
printf("\n");
}
