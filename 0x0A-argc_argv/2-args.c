#include "main.h"

/**
 * main - Main function
 * @argc: length of arguments
 * @argv: array of arguments
 *
 * Return: return 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
