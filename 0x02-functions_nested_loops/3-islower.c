#include "main.h"

/**
 * _islower - checks for leters that are uppercase
 *  Return: returns 1 or 0
 *  @c: is a character argument
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
