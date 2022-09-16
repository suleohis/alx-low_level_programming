#include <stdio.h>

int main(void)
{
unsigned long int i, size = 612852475143;
for (i = 2; i < size; i++)
{
if (size % i == 0)
{
	printf("%ld", i);
}
}
printf("\n");
return (0);
}
