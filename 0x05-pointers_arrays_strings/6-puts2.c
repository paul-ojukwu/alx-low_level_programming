#include "main.h"

/**
 * puts2-prints every other character of a string
 * _putchar-prints to stdout
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
