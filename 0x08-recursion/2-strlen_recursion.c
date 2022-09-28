#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: char array (string)
 *
 * Return: Get the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return ((1 + _strlen_recursion(s)));
	}
	return (0);
}
