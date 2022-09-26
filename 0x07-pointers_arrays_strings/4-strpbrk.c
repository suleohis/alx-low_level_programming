#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: char array (String)
 * @accept: char array (String)
 *
 * Return:  pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i, j, count;
count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
	count++;
	break;
}
}
if (count > 0)
{
	s = s + i;
	break;
}
}
if (count == 0)
{
	return (NULL);
}
return (s);
}
