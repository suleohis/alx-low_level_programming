#include "main.h"

/**
 * getLength - a function to get the length of a char
 * @av: char pointer
 * Return: the length of a char
 */
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


/**
 * string_nconcat - concatenates n bytes from s2 with s1
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: number of bytes of s2 to add to s1
 *
 * Return: a pointer to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 1, k, m = 0;
	char *ptc;

	if (s1 != NULL)
		j = getLength(s1);
	if (s2 != NULL)
		k = getLength(s2);
	ptc = malloc((j + n + 1) * sizeof(char));
	if (ptc == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < j; i++)
		{
			*(ptc + m) = *(s1 + i);
			m++;
		}
	}
	if ((s2 != NULL) && (n < k))
	{
		for (i = 0; i < n; i++)
		{
			*(ptc + m) = *(s2 + i);
			m++;
		}
	}
	else if (s2 != NULL)
	{
		for (i = 0; i < k; i++)
		{
			*(ptc + m) = *(s2 + i);
			m++;
		}
	}
	*(ptc + m) = 0;
	return (ptc);
}
