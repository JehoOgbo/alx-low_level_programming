#include <stdio.h>
#include <stdlib.h>

/**
 * main - outputs minimum amount of coins needed
 * to make change for an amount of money
 *
 * @argc: command lin argument count
 * @argv: command line argument vector
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char **argv)
{
	int i = 0, coinUsed = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0 && coin <= 4)
	{
		if (i >= coins[coin])
		{
			i -= coins[coin];
			coinUsed++;
		}
		else
		{
			coin++;
		}
	}
	printf("%i\n", coinUsed);
	return (0);
}
