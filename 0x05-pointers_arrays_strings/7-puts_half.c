#include "main.h"

/**
 * puts_half-prints half of a string
 * _putchar-prints to stdout
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int n;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		length++;
	}
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
