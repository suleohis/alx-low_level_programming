#include "main.h"

/**
 * _isdigit - a function  to checks for a digit (0 through 9).
 *
 * @c: an integer param
 * Return: always return a value
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
