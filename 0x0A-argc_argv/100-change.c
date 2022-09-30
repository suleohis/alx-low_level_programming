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
	int i, n, numOfCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
		printf("%d\n", 0);
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (n >= coins[i])
			{
				numOfCoins += (n / coins[i]);
				n = n % coins[i];
			}
		}
		printf("%d\n", numOfCoins);
	}
	return (0);
}
