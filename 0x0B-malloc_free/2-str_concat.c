#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: char
 * @s2: char
 *
 * Return:  pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, m = 0;
	char *ptr;

	i = 0;
	j = 0;
	k = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		*(ptr + m) =  *(s1 + k);
		m++;
	}

	for (k = 0; k < j; k++)
	{
		*(ptr + m) = *(s2 + k);
		m++;
	}
	*(ptr + m) = 0;
	return (ptr);
}
