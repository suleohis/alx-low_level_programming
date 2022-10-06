#include "main.h"

/**
 * getLength - a function to get the length of a char
 * @av: char pointer
 * Return: the length of a char
 */
int getLength(char *av)
{
        int len, shift;

        shift = 0;

        for (len = 0; *(av + shift);)
        {
                len++;
                shift++;
        }
        return (len);
}

char **strtow(char *str)
{
	char splitStrings[100][100];
	int i, j, cnt;

	j = 0;
	cnt = 0;
	
	for (i = 0; i <= (getLength(str)); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			splitStrings[cnt][j] = '\0';
			cnt++;
			j = 0;
		}
		else
		{
			splitStrings[cnt][j] = str[i];
			j++;
		}
	}
	return (splitStrings);
}
