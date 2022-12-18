#include "main.h"

/**
 * puts_half-prints half of a string
 * _putchar-prints to stdout
 * length_of_string-calculates the length of strin
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length;
	int n;
	int i;

	length = length_of_string(str);
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		for (i = 0; i < n; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		n = length / 2;
		for (i = n; i < length; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
