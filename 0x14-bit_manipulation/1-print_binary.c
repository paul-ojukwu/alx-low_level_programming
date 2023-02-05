#include "main.h"

/**
 * print_binary-prints the binary representation of a number
 * @n: the decimal to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if ((n & 1) == 1)
	{
		n = n >> 1;
		print_binary(n);
		_putchar('1');
	}
	else if ((n & 1) != 1)
	{
		n = n >> 1;
		print_binary(n);
		_putchar('0');
	}
}
