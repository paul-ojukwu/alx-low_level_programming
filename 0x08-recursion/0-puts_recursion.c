#include "main.h"

/**
 * _puts_recursion-prints a string followed by a new line
 * _putchar-prints a single character
 * @s: string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
