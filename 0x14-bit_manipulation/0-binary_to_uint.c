#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary in char
 *
 * Return: decminal nunmber
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	unsigned int k = 1;
	int i = 0;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	i = len - 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			val += k;

		k *= 2;

		i--;
	}
	return (val);
}
