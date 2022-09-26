#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory space to be copied to
 * @src: memory space to be copied from
 * @n: number of space to fill
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(dest + i) = *(src + i);
}
return (dest);
}
