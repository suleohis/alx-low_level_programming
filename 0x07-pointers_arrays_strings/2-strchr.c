#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: Memory location to me search through
 * @c: char been searched for
 *
 * Return: pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
