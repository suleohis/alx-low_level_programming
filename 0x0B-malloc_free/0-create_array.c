#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);

}
