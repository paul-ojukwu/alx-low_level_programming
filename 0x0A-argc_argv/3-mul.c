#include <stdio.h>

/**
 * main-multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = (int)(*argv[1]) - 48;
	b = (int)(*argv[2]) - 48;
	c = a * b;
	printf("%d\n", c);
	return (0);
}
