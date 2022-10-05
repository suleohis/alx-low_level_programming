#include "main.h"

int getLength(char *av)
{
	int len, shift;
	shift = 0;
	for (len = 0; *(av + shift);)
	{
		len++;
		shift++;
	}
	return (len);
}

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

char *argstostr(int ac, char **av)
{
	int i, len;
	char *ptr, *_ptr;
	if(ac == 0)
		return (NULL);
	len = 0;
	for (i = 1; i < ac; i++)
	{
		len += getLength(av[i]);
	}

	_ptr = ptr = (char *)malloc(len + ac -1);

	for (i = 1; i < ac; i++)
	{
		_memcpy(_ptr, av[i], getLength(av[i]));
		_ptr += getLength(av[i]) + 1;
		*(_ptr - 1) = '\n';
	}

	*(_ptr - 1) = '\n';

	return (ptr);
}
