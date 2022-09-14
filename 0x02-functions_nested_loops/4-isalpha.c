#include "main.h"

/**
 *This is used to find
 *all alphabets
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
} else if (c >= 'A' && c <= 'Z')
{
	return (1);
} else
{
	return (0);
}
}
