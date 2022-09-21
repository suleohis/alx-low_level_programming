#include "main.h"

/**
 * leet - a pointer to the resulting string dest
 * @str: char
 *
 * Return: return pointer in str
 */

char *leet(char *str)
{
	int i, j;
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[i] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
