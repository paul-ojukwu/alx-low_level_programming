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
		printf("Error");
		return (1);
	}
	a = (int) argv[1];
	b = (int) argv[2];
	c = a * b;
	printf("%d\n", c);
	return (0);
}
