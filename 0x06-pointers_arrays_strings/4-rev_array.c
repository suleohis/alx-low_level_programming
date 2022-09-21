#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: int
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;
i = n - 1;
	j = 0;
	while (j < i)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
		i--;
		j++;
	}
}
