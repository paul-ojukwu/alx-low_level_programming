#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main-prints the sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}	
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
