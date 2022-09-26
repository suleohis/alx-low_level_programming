#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: char array (String)
 * @needle: char array (String)
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, n, m, count;
count = 0;

n = 0;
m = 0;
while (haystack[n] != '\0')
	n++;
while (needle[m] != '\0')
	m++;
for (i = 0; i < n; i++)
{
	count = 0;
	for (j = 0; j < m; j++)
	{
		if (haystack[i + count] == needle[j])
			count++;
		else
		{
			count = 0;
			break;
		}
	}
if (count != 0)
	return (haystack + i);
}
if (count == 0)
	return (NULL);
haystack = haystack + i;
return (haystack);
}
