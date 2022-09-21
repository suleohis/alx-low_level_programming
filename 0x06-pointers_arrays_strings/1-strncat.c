#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: char
 * @src: char
 * @n: inti
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
