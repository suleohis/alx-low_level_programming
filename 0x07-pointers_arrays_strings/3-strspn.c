#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char array (String)
 * @accept: char array (String)
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, count, check;
count = 0;
check = 0;
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
if (count == check)
	break;
else
	check = count;
}
return (count);
}
