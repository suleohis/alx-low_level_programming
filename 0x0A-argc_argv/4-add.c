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
	int i, add;

	add = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
			add += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}

