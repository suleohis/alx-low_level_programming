#include "main.h"
#include <stdlib.h>

/**
 * _memncpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to be filled
 * @src: src from which to copy bytes
 * @n: integer determining number of bytes (characters) to be copied
 */
void _memncpy(void *dest, void *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*((char *)dest + i) = *((char *)src + i);
	}
}

/**
 * _realloc - a function that reallocates a
 * memory block using malloc and free
 * @ptr: void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (ptr);
		}
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		_memncpy(ptr2, ptr, (old_size - new_size));
	}
	else
	{
		_memncpy(ptr2, ptr, (old_size));
	}
	free(ptr);
	return (ptr2);
}

