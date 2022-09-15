#include "main.h"

/**
 * isupper - return checks for uppercase character
 * @c: The character to check
 *
 * Return: On success 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
