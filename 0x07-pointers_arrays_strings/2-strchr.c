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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
