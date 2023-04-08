#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description:  a program that prints the minimum number of coins
 *  to make change for an amount of money.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments that was passed to the program.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{

	int numberOfCoins = 0, cent, i;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cent = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (cent != 0)
		{
			if (cent >= coins[i])
			{
				cent = cent - coins[i];
				numberOfCoins++;
			}
			else
			break;
		}
	}
	printf("%d\n", numberOfCoins);
	return (0);
}
