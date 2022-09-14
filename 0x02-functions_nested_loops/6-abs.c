#include "main.h"

/**
 * _abs - returns absolute value of a number
 * @c: parameter
 * Return: absolute value of a number
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
{
return (c * -1);
}
}
