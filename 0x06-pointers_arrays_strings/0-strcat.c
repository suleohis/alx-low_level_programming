#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest:char char
 * @src: char
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
