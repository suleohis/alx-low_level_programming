#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: an integer param
 * Return: always returns a value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
