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
	int sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
