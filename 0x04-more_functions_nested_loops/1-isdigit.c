#include "main.h"

/**
 * isdigit - return checks for digit umber
 * @c: This digit for check
 *
 * Return: on success 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
