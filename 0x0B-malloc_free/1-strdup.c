#include "main.h"

/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 *
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, n;

	i = 0;
	n = 0;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	while (n < i)
	{
		*(ptr + n) = *(str + n);
		n++;
	}
	return (ptr);
}
