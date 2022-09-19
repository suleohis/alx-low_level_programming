#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int i, len;
len = strlen(src);
for (i = 0; i <  len + 1; i++)
{
	if (len != i)
	dest[i] = src[i];
	else
	dest[i] = '\0';

}
return (dest);
}
