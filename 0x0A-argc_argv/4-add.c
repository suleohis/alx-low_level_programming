#include "main.h"

/**
 * main - Main function
 * @argc: length of arguments
 * @argv: array of arguments
 *
 * Return: return 0 success and return 1 unsuccess
 */

int main(int argc, char *argv[])
{
	int i, j, add;

	add = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j); j++)
		{
			if (((*(argv[i] + j) < 48) || (*(argv[i] + j) > 57)))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

