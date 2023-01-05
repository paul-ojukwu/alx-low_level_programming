#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints number of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: integer showing number of coins
 */
int main(int argc, char *argv[])
{
	int cent;
	int i, ans, rem;
	int coins[5] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	i = 0;
	while (coins[i])
	{
		if (cent / coins[i] >= 1)
		{
			ans = cent / coins[i];
			if (cent % coins[i] == 0)
			{
				printf("%d\n", ans);
				return (0);
			}
			else
			{
				rem = cent % coins[i];
				break;
			}
		}
		i++;
	}
	for (; coins[i]; i++)
	{
		if (rem / coins[i] >= 1)
		{
			ans += rem / coins[i];
			rem = rem % coins[i];
		}
	}
	printf("%d\n", ans);
	return (0);
}
